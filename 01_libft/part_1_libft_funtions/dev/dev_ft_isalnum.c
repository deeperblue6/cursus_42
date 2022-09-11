/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_ft_isalnum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:44:37 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 16:55:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_isalnum.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	22-Aug-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/* 
 *	NAME:
 
 *		ft_isalnum
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		void	ft_isalnum(int c);
 *
 *		-(int) c :		a int with the ascii code of a character.
 *		 
 *	DESCRIPTION:
 *
 *		The ft_isalnum() func determines if a character
 *		passed in ASCII code is an aplabetical char both uppercase
 *		and lowercase or a numeric char.
 *
 *	RETURN VALUE:
 *
 *		(1)	- 	Alphabetical Uppercase.
 *		(2)	-	Alphabetical Lowercse.
 *		(4)	-	Numeric.
 *		(0) -	Non Alphanumeric symbol.
 *
 */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (2);
	else if (c >= '0' && c <= '9')
		return (4);
	else
		return (0);
}

int	main(void)
{
	char	c;

	c = 'Q';
	printf("--------------------------------------------------\n");
	printf("Segun la funcion original, %i\n", isalnum(c));
	printf("Segun mi funcion, %i\n", ft_isalnum(c));
	printf("--------------------------------------------------\n");
	c = 'q';
	printf("Segun la funcion original, %i\n", isalnum(c));
	printf("Segun mi funcion, %i\n", ft_isalnum(c));
	printf("--------------------------------------------------\n");
	c = '9';
	printf("Segun la funcion original, %i\n", isalnum(c));
	printf("Segun mi funcion, %i\n", ft_isalnum(c));
	printf("--------------------------------------------------\n");
	c = '0';
	printf("Segun la funcion original, %i\n", isalnum(c));
	printf("Segun mi funcion, %i\n", ft_isalnum(c));
	c = 'a';
	printf("--------------------------------------------------\n");
	printf("Segun la funcion original, %i\n", isalnum(c));
	printf("Segun mi funcion, %i\n", ft_isalnum(c));
	printf("--------------------------------------------------\n");
	c = '3';
	printf("Segun la funcion original, %i\n", isalnum(c));
	printf("Segun mi funcion, %i\n", ft_isalnum(c));
	printf("--------------------------------------------------\n");
	c = '-';
	printf("Segun la funcion original, %i\n", isalnum(c));
	printf("Segun mi funcion, %i\n", ft_isalnum(c));
	printf("--------------------------------------------------\n");
	c = 7;
	printf("Segun la funcion original, %i\n", isalnum(c));
	printf("Segun mi funcion, %i\n", ft_isalnum(c));
}
