/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:34:05 by jmouette          #+#    #+#             */
/*   Updated: 2024/03/07 13:43:50 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H
# define ABS(value)	ft_abs(value)

int	ft_abs(int value)
{
	if (value > 0)
		return (value);
	else
		return (-value);
}

#endif
//# define ABS(Value)	((Value < 0) ? -(Value) : (Value))
