NAME = libftprintf.a
SRC = ft_printf.c ft_utils.c ft_itoa_base.c ft_itoa.c ft_utoa.c
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