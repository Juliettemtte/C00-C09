/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:29:31 by jmouette          #+#    #+#             */
/*   Updated: 2024/02/23 09:20:26 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial (nb - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	int nombre = -2;
	printf("%d\n", ft_recursive_factorial(nombre));
	return 0;
}*/
