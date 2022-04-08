# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 10:49:59 by dpenas-u          #+#    #+#              #
#    Updated: 2022/04/08 11:45:29 by dpenas-u         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = hola.c

OBJ_SRC = $(SRC:.c=.o)

NAME = push_swap

LIBFT = libft

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I.

$(NAME): $(LIBFT)

all: $(NAME)

$(LIBFT):
	cd libft && $(MAKE)

libft_clean:
	cd libft && $(MAKE) clean

libft_fclean:
	cd libft && $(MAKE) fclean

clean:
	rm -f $(OBJ_SRC) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean clean re
