CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a
SRCS = ft_printf.c
OBJS = $(SRCS: .c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

%.o: %.c libftprintf.h
	$(CC) $(CFLAGS) -c $<

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all