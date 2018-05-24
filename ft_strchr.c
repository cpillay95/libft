/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 15:52:45 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/24 16:10:25 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char *strchr(const char *str, int c)
{
	int i;

	i = 0;
	while (str != '\0')
	{
		if (str[i] == c)
			return ((char*)c);

		else
			return (NULL);
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = strchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
