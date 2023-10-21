# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erramos <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 22:36:50 by erramos           #+#    #+#              #
#    Updated: 2023/10/19 22:44:19 by erramos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_strlen.c ft_tolower.c ft_isdigit.c ft_isascii.c ft_isalpha.c \
		ft_isalnum.c ft_bzero.c ft_isprint.c \
		ft_toupper.c ft_strncmp.c ft_strlcat.c ft_strlcpy.c \
		ft_strchr.c ft_strrchr.c ft_memchr.c ft_memset.c \
		ft_memcpy.c ft_memmove.c ft_memcmp.c \

OBJECTS = ft_strlen.o ft_tolower.o ft_isdigit.o ft_isascii.o ft_isalpha.o \
		  ft_isalnum.o ft_bzero.o ft_isprint.o \
		  ft_toupper.o ft_strncmp.o ft_strlcat.o ft_strlcpy.o \
		  ft_strchr.o ft_strrchr.o ft_memchr.o ft_memset.o \
		  ft_memcpy.o ft_memmove.o ft_memcmp.o \

all: $(NAME)

$(NAME): $(OBJECTS)

$(OBJECTS): $(FILES) libft.h
	@gcc -Wextra -Werror -Wall -c $(FILES)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	
clean:
	@rm -f $(OBJECTS)

bonus:
	@gcc -Wextra -Werror -Wall -c $(FILES)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean all
