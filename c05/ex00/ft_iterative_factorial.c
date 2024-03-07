/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:20:56 by jmouette          #+#    #+#             */
/*   Updated: 2024/02/23 09:14:25 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	while (i > 1)
	{
		nb = nb * (i - 1);
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int nombre = 1;
	printf("%i\n", ft_iterative_factorial(nombre));
	return 0;
}*/
