/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 10:32:12 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/24 13:04:13 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;
	char	*new;

	i = 0;
	new = str;
	while (i != n)
	{
		new[i] = c;
		i++;
	}
	return (new);
}
