/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_ft_strlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:21:47 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 16:22:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_strlen.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	22-Aug-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/* 
 *	NAME:
 *
 *		ft_strlen
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		int		ft_strlen(char *str);
 *
 *		-(char) *str :		a int with the ascii code of a character.
 *		 
 *	DESCRIPTION:
 *
 *		The ft_strlen() determine the number of bytes
 *		of the String passed as argument in <str>
 *
 *	RETURN VALUE:
 *
 *		(INT) - Returns the number of bytes of the string (str) 
 *				passed as argument.
 *
 */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
