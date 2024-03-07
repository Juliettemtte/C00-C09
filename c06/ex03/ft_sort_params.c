/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 11:48:27 by jmouette          #+#    #+#             */
/*   Updated: 2024/02/27 17:32:43 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_putchar(char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		write (1, &s1[i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char	*t;

	t = *s1;
	*s1 = *s2;
	*s2 = t;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	c;
	int	t;

	t = 1;
	c = 1;
	while (t < argc)
	{
		while (c < argc - 1)
		{
			if (ft_strcmp(argv[c], argv[c + 1]) > 0)
				ft_swap(&argv[c], &argv[c + 1]);
			c++;
		}
		c = 1;
		t++;
	}
	while (c < argc)
	{
		ft_putchar(argv[c]);
		c++;
	}
	return (0);
}
