/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 13:16:36 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/25 13:47:08 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	memcmp(const void *str, const void *str2, size_t n)
{
	  int             i;
      unsigned char   *cs1;
      unsigned char   *cs2;
 
      i = 0;
      cs1 = (unsigned char *)str;
      cs2 = (unsigned char *)str2;
      
	  while (cs1[i] && cs2[i] && (cs1[i] == cs2[i]))
  {
	  if
}
