/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:20:46 by jmouette          #+#    #+#             */
/*   Updated: 2024/02/23 10:18:24 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 1)
	{
		result *= nb;
		power --;
	}
	return (result);
}
/*
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	int a;
	int b;

	a = 0;
	b = -1;
	printf("%d ^ %d = %d\n",a, b, ft_iterative_power(a, b));

	a = 2;
	b = 0;
	printf("%d ^ %d = %d\n",a, b, ft_iterative_power(a, b));

	a = 2;
	b = 2;
	printf("%d ^ %d = %d\n",a, b, ft_iterative_power(a, b));
	return (0);
}*/
