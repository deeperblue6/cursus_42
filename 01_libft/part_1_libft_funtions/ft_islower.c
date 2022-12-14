/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:10:37 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 16:10:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_islower.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	22-Aug-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/* 
 *	NAME:
 *
 *		ft_islower
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		int		ft_islower(int c);
 *
 *		-(int) c :		a int with the ascii code of a character.
 *		 
 *	DESCRIPTION:
 *
 *		The ft_islower() func determines if a character
 *		passed in ASCII code is an aplabetical lowercase char.
 *
 *	RETURN VALUE:
 *
 *		(2)	-	Alphabetical Lowercase.
 *		(0) -	Non Alphabetical Lowercase symbol.
 *
 */

int	ft_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (2);
	return (0);
}
