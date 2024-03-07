/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 09:17:50 by jmouette          #+#    #+#             */
/*   Updated: 2024/02/28 15:10:20 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i * i <= nb && i < 46341)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	printf("2 : %d\n", ft_find_next_prime(1));
	printf("3 : %d\n", ft_find_next_prime(3));
	printf("11 : %d\n", ft_find_next_prime(9));
	printf("31 : %d\n", ft_find_next_prime(31));
	printf("37 : %d\n", ft_find_next_prime(32));
}*/
