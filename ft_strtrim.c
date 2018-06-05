/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 09:37:08 by cpillay           #+#    #+#             */
/*   Updated: 2018/06/05 10:41:19 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	twhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	char	*b;

	b = NULL;
	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	while (twhitespace(s[i]))
		i++;
	while (s[j] != '\0')
		j++;
	while (twhitespace(s[j - 1]))
		j--;
	if (j == 0)
		return (b = "");
	return (b = ft_strsub(s, i, j - i));
}
