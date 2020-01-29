NAME = fdf

FLAGS = -Werror -Wextra -Wall

GREEN = \033[0;32m
RED = \033[0;31m
END = \033[0m

SRCS =	main.c						\
		libftprintf.a				\
		srcs/draw_line.c			\
		srcs/parse_map.c			\
		srcs/draw_map.c				\
		srcs/convert_to_iso.c		\
		srcs/allocate_file_struct.c

MLXI =	-I /usr/local/include -L /usr/local/lib \
		-l mlx -l ft -framework OpenGL -framework Appkit

all: $(NAME)

$(NAME):
	make -C libft re
	gcc $(FLAGS) -o $(NAME) $(SRCS) -L./libft/ -lft $(MLXI) -g
	@echo "$(NAME): $(GREEN)$(NAME) was created!$(END)"

clean:
	make -C libft clean
	@echo "$(NAME): $(RED)All object files were deleted.$(END)"

fclean:	clean
	rm -f $(NAME)
	@echo "$(NAME): $(RED)$(NAME) was deleted$(END)"

re:	fclean all

.PHONY: all clean fclean re
.PRECIOUS: author