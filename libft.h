/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpillay <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:29:35 by cpillay           #+#    #+#             */
/*   Updated: 2018/05/25 14:29:42 by cpillay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

void	ft_putchar(unsigned char c);
int		my_whitespace(char c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strcpy(char *sd, const char *ss);
int		ft_strlen(const char *s);
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
char	*ft_strdup(char *s1);
void	*ft_memset(void *str, int c, size_t n);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr(int c);
void	ft_putstr_fd(char const *c, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
void	*ft_memcpy(void *str1, const void *str2, size_t n);
int		ft_strncmp(const char *str1, const char *str2, size_t n);

#endif
