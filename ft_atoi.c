/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:32:13 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/24 12:24:11 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** i[0] is sign
** i[1] is index
** i[2] is exit
*/

int		ft_atoi(const char *str)
{
	int				i[3];
	unsigned int	res;

	i[0] = 1;
	res = 0;
	i[1] = 0;
	i[2] = 0;
	while (my_whitespace(str[i[1]]))
		i[1]++;
	if (str[i[1]] == '-')
	{
		i[0] = i[0] * -1;
		i[1]++;
	}
	while ((str[i[1]] >= '0' && str[i[1]] <= '9'))
	{
		res = res * 10 + (str[i[1]] - '0');
		i[1]++;
		i[2]++;
	}
	if (i[2] > 10 && i[0] == -1)
		return (0);
	else if (i[2] > 10)
		return (-1);
	return (res * i[0]);
}
