/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 14:54:13 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/29 16:13:46 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  1 haystack index;
**  2 needle index;
**  3 placeholder;
**  4 count;
*/

#include "libft.h"

static char	*shorten(const char *h, const char *n, size_t len, size_t index[4])
{
	while (index[3] < len && h[index[0]] != '\0')
	{
		while (n[index[1]] != '\0')
		{
			if (h[index[0]] == (n[index[1]]))
			{
				index[1]++;
				index[0]++;
			}
			else
			{
				index[1] = 0;
				index[0] = index[2];
				index[2]++;
				break ;
			}
			index[3]++;
		}
		if (n[index[1]] == '\0')
			return ((char *)&h[index[0] - index[1]]);
	}
	return (NULL);
}

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index[4];

	index[0] = 0;
	index[1] = 0;
	index[2] = 0;
	index[3] = 0;
	if (needle[index[0]] == '\0')
		return ((char *)haystack);
	return (shorten(haystack, needle, len, index));
}
