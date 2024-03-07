/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 10:28:37 by jmouette          #+#    #+#             */
/*   Updated: 2024/02/27 17:01:32 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index < 2)
		return (index);
	return (ft_fibonacci (index - 2) + ft_fibonacci (index - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_fibonacci(7));
}*/
