# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpillay <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/22 09:25:36 by cpillay           #+#    #+#              #
#    Updated: 2018/05/24 14:33:30 by cpillay          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Werror -Wextra -I.

HEADER =

SRCS = ft_isdigit.c	ft_putendl_fd.c	ft_strcpy.c \
   	   ft_atoi.c ft_isprint.c ft_putnbr.c \
	   ft_strdup.c	my_whitespace.c ft_bzero.c	\
	   ft_memset.c	ft_putnbr_fd.c	ft_strlen.c \
	   ft_isalnum.c	ft_putchar.c ft_putstr.c \
	   ft_tolower.c ft_isalpha.c ft_putchar_fd.c \
	   ft_putstr_fd.c ft_toupper.c ft_isascii.c \
	   ft_putendl.c	ft_strcmp.c	

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJS): $(SRCS)
	gcc -c $(CFLAGS) $(SRCS)

clean:
	/bin/rm *.o$(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean
