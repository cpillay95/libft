/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:32:13 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/23 13:46:26 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "libft.h"

int     my_whitespace(char c);

int ft_atoi (const char *str)
{
	int sign;
	int index;
	unsigned int res;
	int	exit;

	sign = 1;
	res = 0;
	index = 0;
	exit = 0;

	while (my_whitespace(str[index]))
		index++;
	if (str[index] == '-')
	{
		sign = sign * -1;
		index++;
	}
	while((str[index] >= '0' && str[index] <= '9'))
		{
			res = res*10 + (str[index] - '0');
			index++;
			exit++;
		}	
	if (exit > 10 && sign == -1)
		return (0);
	else if (exit > 10)
		return (-1);
			 
	return(res * sign);
}
