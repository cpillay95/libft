/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnewl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 09:19:32 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/30 13:20:21 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*new;
	int		i;

	i = 0;
	new = (char*)malloc(sizeof(char) * (size + 1));
	while (new && size <= 2147483648)
	{
		ft_memset(new, '\0', size + 1);
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
