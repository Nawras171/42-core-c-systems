NAME = libftprintf.a
CC = cc
FLAGS = -Wall -Wextra -Werror

SRC = ft_print_char.c ft_print_hex.c ft_print_nbr.c ft_print_unsigned.c\
		ft_print_str.c ft_print_ptr.c ft_printf.c 

OBJ = $(SRC:.c=.o)

%.o: %.c ft_printf.h
		$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
