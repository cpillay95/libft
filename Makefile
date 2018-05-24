# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpillay <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/22 09:25:36 by cpillay           #+#    #+#              #
#    Updated: 2018/05/22 14:40:17 by cpillay          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
    gcc -c *.c -Wall -Wextra -Werror
    ar -rc libft.a *.o
    ranlib libft.a

fclean: clean
    /bin/rm libft.a

clean: 
     rm -f *.o 