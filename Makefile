NAME = libft.a
SRCS = ft_memset.c ft_bzero.c
KEYS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(SRCS) -c
	ar rc $(NAME) ft_memset.o ft_bzero.o
	ranlib $(NAME)


clean:
	rm -f $(NAME)

fclean: clean
	rm -f *.o

re: fclean $(NAME)
