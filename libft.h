/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:29:35 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/22 15:40:50 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

void	ft_putchar(char c);
int		my_whitespace(char c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	ft_strcpy(char *sd, char *ss);
int		ft_strlen(char *s);
void	ft_bzero(void *s, size_t n);
int		ft_atoi(const char *str);
void	ft_putstr(char *str);
int		ft_isprint(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
void	ft_putendl(char const *s);
int		ft_strcmp(const char *str1, const char *str2);
char	*ft_strdup(const char *s1);

#endif
