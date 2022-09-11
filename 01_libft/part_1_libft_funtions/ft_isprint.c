/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:10:06 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 16:13:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_isprint.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	22-Aug-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/* 
 *	NAME:
 *
 *		ft_isprint
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		int		ft_isprint(int c);
 *
 *		-(int) c :		a int with the ascii code of a character.
 *		 
 *	DESCRIPTION:
 *
 *		The ft_isprint() func determines if a character
 *		passed in ASCII code is a printable char (32 - 127).
 *
 *	RETURN VALUE:
 *
 *		(1)	- 	Alphabetical Uppercase char.
 *		(2)	-	Alphabetical Lowercse char.
 *		(4)	-	Digit char.
 *		(16)-	Other printable ASCII char.
 *		(32)-	Space char.
 *		(0) -	Non Alphanumeric symbol.
 *
 */

int	ft_isprint(int c)
{
	if (c >= '0' && c <= '9')
		return (4);
	else if (c == 32)
		return (64);
	else if ((c >= 33 && c <= 47) || (c >= 48 && c <= 64))
		return (16);
	else if ((c >= 91 && c <= 96) || (c >= 123 && c <= 126))
		return (16);
	else if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (2);
	return (0);
}
