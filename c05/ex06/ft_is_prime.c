/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 08:41:06 by jmouette          #+#    #+#             */
/*   Updated: 2024/02/27 17:02:24 by jmouette         ###   ########.fr       */
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
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_is_prime(1));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(9));
	printf("%d\n", ft_is_prime(31));
	printf("%d\n", ft_is_prime(32));
}*/
