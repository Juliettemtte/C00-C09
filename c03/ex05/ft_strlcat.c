/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@sutdent.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:42:35 by jmouette          #+#    #+#             */
/*   Updated: 2024/02/21 16:03:32 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	x;

	i = 0;
	j = 0;
	x = 0;
	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0')
		j++;
	if (j > size)
		return (i + size);
	while (src[x] != '\0' && x < (size - 1))
	{
		dest[j] = src[x];
		j++;
		x++;
	}
	dest[j] = '\0';
	return (i + j - x);
}
