/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_whitespace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 10:54:13 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/25 12:41:42 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		my_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\r' ||
			c == '\v' || c == '\n' || c == '\f')
		return (1);
	else
		return (0);
}
