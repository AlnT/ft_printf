NAME = ft_printf

SRC = main.c printf.c type_manage.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(O)
	@make -C ./libft all
	@gcc $(WFLAGS) -L. libft/libft.a $(SRC) -o $(NAME)

clean:
	@make -C libft clean
	@rm -f $(O)
	@rmdir $(OBJP) 2> /dev/null || true

fclean: clean
	@make -C libft fclean
	@rm -f $(NAME)

re: fclean all