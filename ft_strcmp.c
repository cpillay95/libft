/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:25:57 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/22 15:34:54 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int i;
	unsigned char *cs1;
	unsigned char *cs2;

	i = 0;
	cs1 = (unsigned char *)s1;
	cs2 = (unsigned char *)s2;

	while (cs1[i] && cs2[i] && (cs1[i] == cs2[i]))
		i++;

	return (cs1[i] = cs2[i]);
}
