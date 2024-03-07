/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 14:35:59 by jmouette          #+#    #+#             */
/*   Updated: 2024/03/07 08:24:34 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	diff;

	diff = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	diff = max - min;
	*range = malloc((diff) * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < diff)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (diff);
}
/*
#include <stdio.h>

int	main(void)
{
	int	size;
	int	i = 0;
	int	min = 2;
	int	max = 14;
	int	*tab;

	size = ft_ultimate_range(&tab, min, max);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
