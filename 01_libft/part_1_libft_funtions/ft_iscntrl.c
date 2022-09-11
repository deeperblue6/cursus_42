/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:15:04 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 16:15:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_iscntrl.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	22-Aug-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/* 
 *	NAME:
 
 *		ft_iscntrl
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		int		ft_iscntrl(int c);
 *
 *		-(int) c :		a int with the ascii code of a character.
 *		 
 *	DESCRIPTION:
 *
 *		The ft_iscntrl() func determines if a character
 *		passed in ASCII code is a control char.
 *
 *	RETURN VALUE:
 *
 *		(32)	- 	Control character.
 *		(0)		-	Non control character.
 *
 */

int	ft_iscntrl(int c)
{
	if ((c >= 0 && c <= 32) || c == 127)
		return (32);
	return (0);
}
