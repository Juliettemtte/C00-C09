/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:41:51 by jmouette          #+#    #+#             */
/*   Updated: 2024/02/28 15:06:55 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	if (nb < 0)
		return (0);
	while (x * x <= nb && x <= 46341)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}
/*
#include <unistd.h> 
#include <stdio.h>
int	main(void)
{
	printf("sqrt of 46341 :%d\n", ft_sqrt(46341));
	printf("sqrt of 225 :%d\n", ft_sqrt(225));
	printf("sqrt of 16 :%d\n", ft_sqrt(16));
	printf("sqrt of 0 :%d\n", ft_sqrt(0));
	printf("sqrt of 1 :%d\n", ft_sqrt(1));
	printf("sqrt of -1 :%d\n", ft_sqrt(-1));
}*/
