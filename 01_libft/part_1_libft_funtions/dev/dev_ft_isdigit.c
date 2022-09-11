/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_ft_isdigit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:48:46 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 16:48:55 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_isdigit.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	22-Aug-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/* 
 *	NAME:
 *
 *		ft_isdigit
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		int		ft_isdigit(int c);
 *
 *		-(int) c :		a int with the ascii code of a character.
 *		 
 *	DESCRIPTION:
 *
 *		The ft_isdigit() func determines if a character
 *		passed in ASCII code is a digit ('0' to '9') char.
 *
 *	RETURN VALUE:
 *
 *		(1)	- 	Digit char.
 *		(0) -	Non Digit char.
 *
 */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	main(void)
{
	char	c;

	c = 'Q';
	printf("--------------------------------------------------\n");
	printf("Segun la funcion original, %i\n", isdigit(c));
	printf("Segun mi funcion, %i\n", ft_isdigit(c));
	printf("--------------------------------------------------\n");
	c = '-';
	printf("Segun la funcion original, %i\n", isdigit(c));
	printf("Segun mi funcion, %i\n", ft_isdigit(c));
	printf("--------------------------------------------------\n");
	c = 5;
	printf("Segun la funcion original, %i\n", isdigit(c));
	printf("Segun mi funcion, %i\n", ft_isdigit(c));
	printf("--------------------------------------------------\n");
	c = '6';
	printf("Segun la funcion original, %i\n", isdigit(c));
	printf("Segun mi funcion, %i\n", ft_isdigit(c));
}
