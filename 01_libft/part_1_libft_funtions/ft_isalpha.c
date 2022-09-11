/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:16:37 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 16:16:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_isalpha.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	22-Aug-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/* 
 *	NAME:
 
 *		ft_isalpha
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		int		ft_isalpha(int c);
 *
 *		-(int) c :		a int with the ascii code of a character.
 *		 
 *	DESCRIPTION:
 *
 *		The ft_isalpha() func determines if a character
 *		passed in ASCII code is an aplabetical char both uppercase
 *		and lowercase.
 *
 *	RETURN VALUE:
 *
 *		(1)	- 	Alphabetical Uppercase.
 *		(2)	-	Alphabetical Lowercse.
 *		(0) -	Non Alphanumeric symbol.
 *
 */

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (2);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
