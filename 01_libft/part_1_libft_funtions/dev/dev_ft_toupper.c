/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_ft_toupper.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:18:54 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 16:20:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_toupper.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	22-Aug-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/* 
 *	NAME:
 *
 *		ft_toupper
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		char	ft_toupper(int c);
 *
 *		-(int) c :	a int with the ascii code of a character.
 *		 
 *	DESCRIPTION:
 *
 *		The ft_toupper() func takes the character passed as argument
 *		and converts it to it uppercase character if can be.
 *		If the character is not an lowercase character left it as is.
 *
 *	RETURN VALUE:
 *
 *		(char)	- 	The character on its uppercase form.
 *
 */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

char	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

int	main(void)
{
	int	i;

	i = 32;
	printf("Nº\t\t--\tCHAR\t\t--\tOWN-FUNC\t--\tSYS_FUNC\n");
	printf("----------------------------------------------------------------\n");
	while (i < 127)
	{
		printf("%i\t\t--\t%c\t\t--\t%c\t\t--\t%c\n", i, i, ft_toupper(i), toupper(i));
		i++;
	}
	return (0);
}
