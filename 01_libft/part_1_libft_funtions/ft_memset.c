/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 15:57:15 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 16:01:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_memset.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	22-Aug-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/*
 *	NAME:
 *
 *		ft_memset
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		void	*ft_memset(void *s, int c, unsigned int n);
 *
 *		-(void) *s 		:		a pointer to the memdir to be set.
 *		-(int)	c 		:		a int number of the ASCII char to set.
 *		-(unsigned int) :		a number of bytes to be filled with <c>.
 *		 
 *	DESCRIPTION:
 *
 *		The ft_memset() func takes a pointer to a memory space
 *		and fill the first <n> bytes with the char passed on <c>
 *
 *	RETURN VALUE:
 *
 *		NONE
 *
 */

char	*ft_memset(void *s, int c, unsigned int n)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = s;
	while (i < (n))
	{
		ptr[i] = c;
		i++;
	}
	while (ptr[i] != '\0')
	{
		ptr[i] = ptr[i];
		i++;
	}
	return (s);
}
