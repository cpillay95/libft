/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 13:13:52 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/29 12:59:05 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t			index;
	unsigned char	*dest;
	unsigned char	*src;
	unsigned char	c1;
	unsigned char	*res;

	c1 = (unsigned char)c;
	index = 0;
	dest = (unsigned char*)s1;
	src = (unsigned char*)s2;
	res = NULL;
	while ((index < n) && (src[index] != c1))
	{
		dest[index] = src[index];
		index++;
		if (src[index] == c1)
		{
			dest[index] = src[index];
			res = &dest[1 + index];
			return (res);
		}
	}
	return (NULL);
}
