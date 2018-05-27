/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 13:13:52 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/27 15:28:40 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t index;
	unsigned char * dest;
	unsigned char * src
	unsigned char c;
	unsigned char *res;
	
	c = (unsigned char)c;
	index = 0;
	dest = (unsigned char*)s1;
	src = (unsigned char*)s2;
	res = NULL;
	
	ft_bzero(dest, n);
	while (index < n && src[index] != c)
	{
		//dest[index] = src[index];
		//index++;
		
		if (src[index] == c)
		{
			dest[index] = src[index];
			res = &dest[1 + index];
			return(res);
		}

		dest[index] = src[index];
		index++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memccpy(dest, src, 'c', strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);

   return(0);
}
*/

