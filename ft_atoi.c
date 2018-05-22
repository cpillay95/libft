/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:32:13 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/22 09:28:34 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

int     my_whitespace(char c);

int ft_atoi (const char *str)
{
	int sign;
	int index;
	int res;

	sign = 1;
	res = 0;
	index = 0;

	while (my_whitespace(str[index]))
		index++;
	if (str[index] == '-')
		sign = sign * -1;
	while((str[index] >= '0' && str[index] <= '9'))
		{
			res = res*10 + (str[index] - '0');
			index ++;
		}	
			return(res * sign);
}
