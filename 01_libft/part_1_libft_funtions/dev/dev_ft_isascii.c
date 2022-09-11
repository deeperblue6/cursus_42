/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_ft_isascii.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:52:59 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 16:53:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_isascii.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	22-Aug-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/* 
 *	NAME:
 
 *		ft_isascii
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		int		ft_isascii(int c);
 *
 *		-(int) c :		a int with the ascii code of a character.
 *		 
 *	DESCRIPTION:
 *
 *		The ft_isascii() func determines if a character
 *		passed in ASCII code is an ASCII char.
 *
 *	RETURN VALUE:
 *
 *		(1)	- 	ASCII character.
 *		(0) -	Non ASCII character.
 *
 */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int	main(void)
{
	long	i;

	i = 0;
	while (i < 256)
	{
		printf("%d\t-\t%c", i, i);
		printf("\n");
		i++;
	}
	return (0);
}

int	main(void)
{
	int	ch;

	ch = 0;
	while (ch <= 255)
	{
		printf("%i\t", ch);
		if (isascii(ch))
			printf("The character is %c\t-\t%i\t-\t%i\n", ch, isascii(ch), ft_isascii(ch));
		else
			printf("The character is %c\t-\t%i\t-\t%i\n", ch, isascii(ch), ft_isascii(ch));
		ch++;
	}
	return (0);
}
