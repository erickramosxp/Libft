# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erramos <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 15:59:27 by erramos           #+#    #+#              #
#    Updated: 2023/10/19 21:47:57 by erramos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
FLAGS	=	-Wall -Wextra -Werror
SRCS	=	ft_isalpha.c ft_isprint.c ft_memcpy.c ft_strchr.c ft_strlen.c ft_tolower.c \
		ft_bzero.c ft_isascii.c ft_memchr.c ft_memmove.c ft_strlcat.c ft_strncmp.c \
		ft_toupper.c ft_isalnum.c ft_isdigit.c ft_memcmp.c ft_memset.c ft_strlcpy.c \
		ft_strrchr.c
OBJS	=	${SRCS:.c=.o}

all:		${NAME}

${NAME}:	${SRCS}
			gcc ${FLAGS} -c ${SRCS}
			ar rcs ${NAME} ${OBJS}

clean:
		rm ${OBJS}
fclean:		clean
		rm ${NAME}
re:		fclean ${NAME}

#libft.a:
#	gcc -c ${FLAGS} *.c
#	ar rcs ${NAME} *.o
