/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 09:55:28 by jmouette          #+#    #+#             */
/*   Updated: 2024/02/18 10:00:49 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_str_is_lowercase("ahbwidfjknr"));
	printf("\n%d", ft_str_is_lowercase("AFJGrgeANJ"));
	printf("\n%d", ft_str_is_lowercase("-jbnj214gfd"));
	printf("\n%d", ft_str_is_lowercase(""));
}*/
