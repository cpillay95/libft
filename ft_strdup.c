/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:42:43 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/22 16:01:12 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strdup(char *src)
{
	char *dst;
	int len;
	int i;

	len = 0;
	if(src == NULL)
		return(NULL);
	while(src[len] != '\0')
		len++;
	
	dst = (char *)(malloc(sizeof(char) * len) + 1);
	i = 0;

	while(i < len)
	{
		dst[i] = src[i];
		i++;
	}

	dst[i] = '\0';
	return(dst);
}

#include <stdio.h>
#include <string.h>
int main()
{
    char *p1 = "Raja";
    char *p2;
    p2 = ft_strdup(p1);

    printf("Duplicated string is : %s", p2);
    return 0;
}
