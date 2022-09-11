/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dev_ft_memccpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 16:25:23 by marvin            #+#    #+#             */
/*   Updated: 2022/08/22 19:19:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* This function is only for educational pourpose only
 *
 * It was created for use in 42_MADRID cursus,
 * as a didactic method in learning how to create functions and
 * libraries, and understand the functions included in them.
 *
 *      File: libft/ft_memccpy.c
 *      Author: Ivan Agudo, 42_MADRID ( Telefonica Foundation ).
 *
 * HISTORY:
 *
 *      22-Aug-2022     Ivan Agudo <i.agudo@outlook.es>
 */
/*
 *      NAME:
 *
 *              ft_memccpy
 *
 *      SYNOPSIS:
 *
 *              #include <libft.h>
 *
 *              void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
 *
 *              -(void) *dest : a pointer to the destination memdir of any type of data;
 *              -(void) *src :  a pointer of de source memdir of any type of data;
 *              -(int)	c :	character that stops the copy when find it on <src>;
 *              -size_t n  :    number of bytes will be copied from <src> to <dest>;
 *
 *      DESCRIPTION:
 *
 *              The ft_memccpy() func copies max "n" first bytes of
 *              memory pointed to by "src", to "n" first bytes of
 *              memory pointed to by "dest" until <c> character is find on <src>
 *              that stop the copy.
 *
 *      RETURN VALUE:
 *
 *              Returns a pointer to the next character of dest after <c>.
 *              If <c> was not found in the first <n> chars of <src> it will return NULL
 *
 */

#include <stdio.h>
#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!src || !dest)
		return (NULL);
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		if (*(char *)(src + i) == (char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str1[50] = "El string a ser copiado";
	char	str2[50] = "Aqui se va a copiar";
	char	str3[50] = "El string a ser copiado";
	char	str4[50] = "Aqui se va a copiar";

	printf("%s\n", memccpy(str1, str2, 'l', 5));
	printf("%d\n", memccpy(str1, str2, 'l', 5));
	printf("%p\n", memccpy(str1, str2, 'l', 5));
	printf("%s\n", str1);
	printf("%s\n\n", str2);

	printf("\n%s\n", memccpy(str1, str2, 's', 7));
	printf("%d\n", memccpy(str1, str2, 's', 7));
	printf("%p\n", memccpy(str1, str2, 's', 7));
	printf("%s\n", str1);
	printf("%s\n\n", str2);

	printf("%s\n", memccpy(str1, str2, 'x', 10));
	printf("%d\n", memccpy(str1, str2, 'x', 10));
	printf("%p\n", memccpy(str1, str2, 'x', 10));
	printf("%s\n", str1);
	printf("%s\n\n", str2);
	
	printf("%s\n", ft_memccpy(str3, str4, 's', 7));
	printf("%d\n", ft_memccpy(str3, str4, 's', 7));
	printf("%p\n", ft_memccpy(str3, str4, 's', 7));
	printf("%s\n", str3);
	printf("%s\n\n", str4);

	printf("%s\n", memccpy(str1, str2, 'a', 15));
	printf("%d\n", memccpy(str1, str2, 'a', 15));
	printf("%p\n", memccpy(str1, str2, 'a', 15));
	printf("%s\n", str1);
	printf("%s\n\n", str2);


	return (0);

}
*/
