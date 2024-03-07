/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 16:36:11 by jmouette          #+#    #+#             */
/*   Updated: 2024/02/19 11:24:41 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0' ;
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	*str1;
	char	str2[20];
	unsigned int	i;

	i = 7;
	str1 = "Hello world!";
	printf("%s", ft_strncpy(str2, str1, i));
}*/
