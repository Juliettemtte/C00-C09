/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:32:19 by jmouette          #+#    #+#             */
/*   Updated: 2024/03/07 09:45:08 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	full_len(int size, char **str, char *sep)
{
	int	len;
	int	i;

	len = (ft_strlen(sep) * (size - 1));
	i = 0;
	while (i < size)
	{
		len += ft_strlen(str[i]);
		i++;
	}
	return (len + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*string;

	i = 1;
	if (size <= 0)
	{
		string = (char *)malloc(sizeof(char));
		return (0);
	}
	string = (char *)malloc(full_len(size, strs, sep) * sizeof(char));
	if (string == NULL)
		return (0);
	ft_strcpy(string, strs[0]);
	while (i < size)
	{
		ft_strcat(string, sep);
		ft_strcat(string, strs[i]);
		i++;
	}
	return (string);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*all_strings[] = {"on%e", "beauti5555ful", "&$day"};
	char	*separetor;
	char	*new_string;
	separetor = "_$)_";
	new_string = ft_strjoin(3, all_strings, separetor);
	printf("%s\n", new_string);
	free(new_string);
}*/
