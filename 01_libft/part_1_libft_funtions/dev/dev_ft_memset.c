/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_ft_memset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:23:50 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 16:34:28 by marvin           ###   ########.fr       */
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
 *		(*pointer)	Return a pointer to the memdir of the s String
 *
 */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <memory.h>
#include <string.h>

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
/*
int	main(void)
{
	char	buffer1[] = "Este es el texto de prueba de la funcion memset";
	char	buffer2[] = "Otro texto para probar la funcion mem set, que ocurrira?";
	char	buffer3[] = "Otro texto mas";
	char	buffer4[] = "Este es el texto de prueba de la funcion memset";
	char	buffer5[] = "Otro texto para probar la funcion mem set, que ocurrira?";
	char	buffer6[] = "Otro texto mas";

	printf("\n\tAntes de pasar la funcion; \n");
	printf("----------------------------------------------------------------\n");
	printf("\t%s\n", buffer1);
	printf("\t%s\n", buffer2);
	printf("\t%s\n", buffer3);
	memset(buffer1, '*', 19);
	memset(buffer2, '+', 19);
	memset(buffer3, '=', 16);
	ft_memset(buffer4, '*', 19);
	ft_memset(buffer5, '+', 19);
	ft_memset(buffer6, '=', 16);
	printf("\n\tDespues de pasar la funcion; \n");
	printf("---------------------------------------------------------------\n");
	printf("\t%s\n", buffer1);
	printf("\t%s\n", buffer2);
	printf("\t%s\n", buffer3);
	printf("\t%s\n", buffer4);
	printf("\t%s\n", buffer5);
	printf("\t%s\n", buffer6);
	retur (0);
}*/
