# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/21 10:49:59 by dpenas-u          #+#    #+#              #
#    Updated: 2022/04/12 09:29:05 by dpenas-u         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_push_swap.c ft_swap.c ft_push.c ft_rotate.c ft_rrotate.c \
	  ft_check_order_ascen.c ft_check_order_desc.c ft_check_arg.c

OBJ_SRC = $(SRC:.c=.o)

NAME = push_swap

LIB = -L libft -lft

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I. -I libft

$(NAME): $(OBJ_SRC)
	cd libft && $(MAKE)
	$(CC) $(CFLAGS) $(LIB) $(OBJ_SRC) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJ_SRC)
	cd libft && $(MAKE) clean

fclean: clean
	rm -f $(NAME)
	cd libft && $(MAKE) fclean

re: fclean all

.PHONY: all fclean clean re
