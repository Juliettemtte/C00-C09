/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:29:35 by jmouette          #+#    #+#             */
/*   Updated: 2024/02/23 10:28:15 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	if (power > 1)
		return (nb * ft_recursive_power (nb, (power - 1)));
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
	printf("%d ^ %d = %d\n",a, b, ft_recursive_power(a, b));

	a = 2;
	b = 0;
	printf("%d ^ %d = %d\n",a, b, ft_recursive_power(a, b));

	a = 4;
	b = 4;
	printf("%d ^ %d = %d\n",a, b, ft_recursive_power(a, b));
	return (0);
}*/
