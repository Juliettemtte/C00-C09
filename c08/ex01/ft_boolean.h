/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmouette <jmouette@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 08:30:36 by jmouette          #+#    #+#             */
/*   Updated: 2024/02/29 12:57:14 by jmouette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum s_bool
{
	true = 1,
	false = 0,
}	t_bool;

# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"
# define TRUE	true
# define FALSE	false
# define SUCCESS	0
# define EVEN(nbr)	(nbr % 2 == 0)

#endif
