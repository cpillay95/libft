/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:17:42 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/28 10:40:46 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	*cs1;
	unsigned char	*cs2;

	i = 0;
	cs1 = (unsigned char *)str1;
	cs2 = (unsigned char *)str2;
	while ((i < n) && (cs1[i] == cs2[i]))
	{
		if (cs1[i] == '\0' || cs2[i] == '\0')
			break ;
		i++;
	}
	return (cs1[i] - cs2[i]);
}
