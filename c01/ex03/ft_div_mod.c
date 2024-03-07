/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:10:41 by jmouette          #+#    #+#             */
/*   Updated: 2024/02/18 14:25:23 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main()
{
	int *div, *mod;
	int a;
 	int b;
	a = 12;
  	b = 3;
	int c, d;
	div = &c;
	mod = &d;
  	ft_div_mod(a, b, div, mod);
  	printf("div %d, mod %d", c, d);
} */
