/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 14:33:53 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/24 15:59:40 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;

	i = 0;

	while (haystack[i] != '\0')
	{
	//	ft_strcmp(needle, haystack);
		
	//	if (needle == NULL)
	//		return ((char*)haystack);
		
		if (ft_strcmp(needle, haystack) != 0)
			return (NULL);

		else 
			return ((char*)needle);
	}
	return ((char*)haystack);
}

#include <stdio.h>
#include <string.h>


int main () {
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   char *ret;

   ret = ft_strstr(haystack, needle);

   printf("The substring is: %s\n", ret);

   return(0);
}
