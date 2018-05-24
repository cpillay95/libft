/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:42:43 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/23 15:48:39 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_strlen(const char *s);

char *ft_strdup(char *s1)
{
	char *dst;
	int len;
	int i;

	len = ft_strlen(s1);
		
	dst = (char *)malloc(sizeof(char) * len + 1);
	i = 0;

	if(dst == NULL || s1 == NULL)
		return(NULL);

	while(i < len)
	{
		dst[i] = s1[i];
		i++;
	}

	dst[i] = '\0';
	return(dst);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char *p1 = "Raja";
    char *p2;
    p2 = ft_strdup(p1);

    printf("Duplicated string is : %s", p2);
    return 0;
}*/
