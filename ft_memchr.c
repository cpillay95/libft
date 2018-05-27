/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 13:40:45 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/27 14:14:27 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_memchr(const void *str, int c, size_t n)
{
	size_t i;
	char* s;

	i = 0;
	s = (char*) str;

	while (i < n)
	{
		if (s[i] == c)
			return ((char*)&str[i]);
		else
			i++;
	}
	return (NULL);
}
