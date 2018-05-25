/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 09:55:46 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/25 10:52:33 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (str[i] != (char)c)
	{
		if (str[i] == str[1])
		{
			return (NULL);
		}
		str--;
		i--;
	}
	return ((char*)&str[i]);
}
