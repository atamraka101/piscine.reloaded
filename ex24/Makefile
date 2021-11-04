# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atamraka <atamraka@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/01 22:56:27 by atamraka          #+#    #+#              #
#    Updated: 2021/11/02 15:06:56 by atamraka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCES_DIR = srcs
INCLUDES_DIR = ./includes

SOURCES = $(SOURCES_DIR)/ft_putchar.c $(SOURCES_DIR)/ft_putstr.c \
				$(SOURCES_DIR)/ft_strcmp.c \
				$(SOURCES_DIR)/ft_strlen.c $(SOURCES_DIR)/ft_swap.c
OBJECT = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: make_lib

make_lib:
	@$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -c $(SOURCES)
	@ar -rc $(NAME) $(OBJECT)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all
