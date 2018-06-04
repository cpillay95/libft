/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 12:07:57 by cpillay           #+#    #+#             */
/*   Updated: 2018/06/04 16:21:17 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_split(const char *str, char c)
{
	int i;
	int ret;

	i = 0;
	ret = 0;

	while (str[i] != '\0')
	{
		while (str[i] == c)
		{
			i++;
		}
		if (str[i] != c && str[i] != '\0')
		{
			ret++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
	}
	return (ret);
}

static char	**string_split (char **ret, char *str, char c, int count)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	count = count + 1;

	while (i < count)
	{
		while (str[j] != '\0')
		{
			if (str[j] != c && str[j] != '\0')
			{
				k = 0;
				while (str[j] != c && str[j] != '\0')
					k++;
			}
			j++;
		}
		i++;
	}
	ret[i] = ft_strsub(str, i, i + k);
	ret[i] = NULL;
	return (ret);
}

char		**ft_strsplit(char const *s, char c)
{
	int count;
	char **ret;
	char *new;

	new = (char*)s;
	count = count_split(s, c);
	ret = (char**)malloc(sizeof(char*) * count + 1);
	ret = string_split(ret, new, c, count + 1);

	return (ret);
}

