/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_ft_memcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:25:23 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 16:35:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only 
 *
 * It was created for use in 42_MADRID cursus, 
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 * 	File: libft/ft_memcpy.c
 * 	Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 * 	22-Aug-2022	Ivan Agudo <i.agudo@outlook.es>
 */
/* 
 *	NAME:
 *
 *		ft_memcpy
 *
 *	SYNOPSIS:
 *
 *		#include <libft.h>
 *
 *		void	*ft_memcpy(void *dest, const void *src, size_t n);
 *
 *		-(void) *dest :	a pointer to the destination memdir of any type of data;
 *		-(void) *src : 	a pointer of de source memdir of any type of data;
 *		-size_t n  :	number of bytes will be copied from src to dest;
 *
 *	DESCRIPTION:
 *
 *		The ft_memcpy() func copies the "n" first bytes of
 *		memory pointed to by "src", to "n" first bytes of
 *		memory pointed to by "dest".
 *
 *	RETURN VALUE:
 *
 *		Returns a pointer to dest.
 *
 */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest)
		return ("NULL");
	i = 0;
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}

int	main(void)
{
	const char src[50] = "Hola soy el string de origen";
	char dest[60] = "Hola soy el string de destino";

	printf("Before memcpy src = %s\n", src);
	printf("Before memcpy src = %d\n", src);
	printf("Before memcpy src = %p\n", src);

	printf("Before memcpy dest = %s\n", dest);
	printf("Before memcpy dest = %d\n", dest);
	printf("Before memcpy dest = %p\n", dest);

	ft_memcpy(dest, src, strlen(src)+1);
	
	printf("After memcpy src = %s\n", src);
	printf("After memcpy src = %d\n", src);
	printf("After memcpy src = %p\n", src);

	printf("After memcpy dest = %s\n", dest);
	printf("After memcpy dest = %d\n", dest);
	printf("After memcpy dest = %p\n", dest);
	return(0);
}
