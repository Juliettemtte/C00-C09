/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 10:08:49 by jmouette          #+#    #+#             */
/*   Updated: 2024/02/20 09:40:43 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	printf("%d", ft_str_is_printable("ahbwidfjknr"));
	printf("\n%d", ft_str_is_printable("AFJGrgeANJ"));
	printf("\n%d", ft_str_is_printable("-jbnj2 14gfd"));
	printf("\n%d", ft_str_is_printable(""));
}*/
