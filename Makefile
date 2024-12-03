# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 05:45:36 by gsampaio          #+#    #+#              #
#    Updated: 2024/12/03 04:18:20 by gsampaio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c ft_print_interger.c ft_print_char.c ft_print_string.c ft_print_pointer.c ft_print_unsigned.c ft_itoa_base.c ft_itoa.c ft_utoa.c ft_print_hex.c
OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
    ar rcs $@ $^

clean:
    rm -f $(OBJ)

fclean: clean
    rm -f $(NAME)

re: fclean all
