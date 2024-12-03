# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gsampaio <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/27 05:45:36 by gsampaio          #+#    #+#              #
#    Updated: 2024/12/03 04:33:57 by gsampaio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c ft_print_interger.c ft_print_char.c ft_print_string.c ft_print_pointer.c ft_print_unsigned.c ft_itoa_base.c ft_itoa.c ft_utoa.c ft_print_hex.c
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAsGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
    ar rcs $(NAME) $(OBJS)
%.o: %.c
	$(CC) &(CFLAGS) -c $< -o $@

clean:
    rm -f $(OBJ)

fclean: clean
    rm -f $(NAME)

re: fclean all
