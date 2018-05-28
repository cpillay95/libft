/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 14:33:53 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/28 14:31:34 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int j;

	i = 0;
	j = 0;

	if (needle == NULL)
		return ((char*)haystack);

	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (haystack[i] != needle[j])
			{
				j = 0;
				i++;
				break ;
			}
			else
			{
				j++;
				i++;
			}
		}
		i++;
		if (needle == '\0')
			return ((char *) needle); 
	}
	return (NULL);
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
