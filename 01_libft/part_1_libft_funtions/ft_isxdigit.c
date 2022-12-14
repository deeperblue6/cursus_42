/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:04:21 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 16:05:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_isxdigit.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	22-Aug-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/* 
 *	NAME:
 *
 *		ft_isxdigit
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		int		ft_isxdigit(int c);
 *
 *		-(int) c :		a int with the ascii code of a character.
 *		 
 *	DESCRIPTION:
 *
 *		The ft_isxdigit() func determines if a character
 *		passed in ASCII code is an hexadecimal digit char
 *
 *	RETURN VALUE:
 *
 *		(128)	- 	Hexadecimal digit.
 *		(0) 	-	Non Hexadecimal digit.
 *
 */

int	ft_isxdigit(int c)
{
	if ((c >= 48 && c <= 57) || (c >= 'A' && c <= 'F'))
		return (128);
	else if (c >= 'a' && c <= 'f')
		return (128);
	return (0);
}
