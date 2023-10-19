# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erramos <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 15:59:27 by erramos           #+#    #+#              #
#    Updated: 2023/10/19 16:05:46 by erramos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAGS = -Wall -Wextra -Werror

all:
	gcc -c ${FLAGS} *.c
	ar rvs ${NAME} *.o
clean:
	rm *.o
fclean: clean
	rm libft.a
re: fclean all
