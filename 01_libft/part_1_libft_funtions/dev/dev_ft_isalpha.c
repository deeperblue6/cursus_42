/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_ft_isalpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:53:57 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 16:54:44 by marvin           ###   ########.fr       */
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

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (2);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	c;

	c = 'Q';
	printf("--------------------------------------------------\n");
	printf("Según la funcion original, %i\n", isalpha(c));
	printf("Según mi funcion, %i\n", ft_isalpha(c));
	printf("--------------------------------------------------\n");
	c = 'r';
	printf("Según la funcion original, %i\n", isalpha(c));
	printf("Según mi funcion, %i\n", ft_isalpha(c));
	printf("--------------------------------------------------\n");
	c = 5;
	printf("Según la funcion original, %i\n", isalpha(c));
	printf("Según mi funcion, %i\n", ft_isalpha(c));
	printf("--------------------------------------------------\n");
	c = '*';
	printf("Según la funcion original, %i\n", isalpha(c));
	printf("Según mi funcion, %i\n", ft_isalpha(c));
	return (0);
}
