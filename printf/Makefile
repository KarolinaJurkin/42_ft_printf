CC = cc
CFLAGS = -Werror -Wextra -Wall
SRC = ft_printf.c ft_putchar_int.c ft_putstr_int.c ft_putnbr_int.c \
ft_putnbr_uns.c ft_putnbr_hex.c ft_putptr_int.c
HD = libftprintf.h
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $@ $^

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re:	fclean all