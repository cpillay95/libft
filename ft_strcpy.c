/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 15:47:13 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/25 10:49:36 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *sd, const char *ss)
{
	int index;

	index = 0;
	while (ss[index] != '\0')
	{
		sd[index] = ss[index];
		index++;
	}
	sd[index] = '\0';
	return (sd);
}
