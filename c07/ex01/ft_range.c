/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 08:25:36 by jmouette          #+#    #+#             */
/*   Updated: 2024/03/07 08:23:13 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	range;
	int	num;

	i = 0;
	num = min;
	if (min >= max)
		return (0);
	range = max - min;
	arr = malloc((range) * sizeof(int));
	if (arr == NULL)
		return (0);
	while (num < max)
	{
		arr[i] = num;
		num++;
		i++;
	}
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*range = ft_range(2, 10);
	int	i;

	i = 0;
	while (i < 8)
	{
		printf("%d  ", range[i]);
		i++;
	}
	return (0);
}*/
