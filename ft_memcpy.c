/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 13:53:08 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/28 10:46:09 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	int		index;
	char	*cs1;
	char	*cs2;

	index = 0;
	cs1 = ((char*)str1);
	cs2 = ((char*)str2);
	while (index < (int)n)
	{
		cs1[index] = cs2[index];
		if (cs2[index] == '\0')
		{
			cs1[index] = '\0';
			break ;
		}
		index++;
	}
	return (str1);
}
