/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 10:00:08 by jmouette          #+#    #+#             */
/*   Updated: 2024/02/20 09:37:10 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_str_is_uppercase("BAJEFGAERGKNV"));
	printf("\n%d", ft_str_is_uppercase("AFJGrgeANJ"));
	printf("\n%d", ft_str_is_uppercase("-jbnj214gfd"));
	printf("\n%d", ft_str_is_uppercase(""));
}*/
