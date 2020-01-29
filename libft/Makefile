# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmaarela <tmaarela@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/17 11:11:52 by taho              #+#    #+#              #
#    Updated: 2020/01/15 15:19:09 by tmaarela         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Wextra -Werror
SRCS =	ft_atoi.c 			\
		ft_bzero.c			\
		ft_isalnum.c		\
		ft_isalpha.c		\
		ft_isascii.c		\
		ft_isdigit.c		\
		ft_isprint.c		\
		ft_itoa.c			\
		ft_memalloc.c		\
		ft_memccpy.c		\
		ft_memchr.c			\
		ft_memcmp.c			\
		ft_memcpy.c			\
		ft_memdel.c			\
		ft_memmove.c		\
		ft_memset.c			\
		ft_putchar.c		\
		ft_putchar_fd.c		\
		ft_putendl.c		\
		ft_putendl_fd.c		\
		ft_putnbr.c			\
		ft_putnbr_fd.c		\
		ft_putstr.c			\
		ft_putstr_fd.c		\
		ft_strcat.c			\
		ft_strchr.c			\
		ft_strclr.c			\
		ft_strcmp.c			\
		ft_strcpy.c			\
		ft_strdel.c			\
		ft_strdup.c			\
		ft_strequ.c			\
		ft_striter.c		\
		ft_striteri.c		\
		ft_strjoin.c		\
		ft_strlcat.c		\
		ft_strlen.c			\
		ft_strmap.c			\
		ft_strmapi.c		\
		ft_strncat.c		\
		ft_strncmp.c		\
		ft_strncpy.c		\
		ft_strnequ.c		\
		ft_strnew.c			\
		ft_strnstr.c		\
		ft_strrchr.c		\
		ft_strsplit.c		\
		ft_strstr.c			\
		ft_strsub.c			\
		ft_strtrim.c		\
		ft_tolower.c		\
		ft_toupper.c		\
		ft_itoa_base.c		\
		ft_putpointer.c		\
		ft_putnbr_base.c	\
		ft_numlength.c		\
		ft_pointer_to_string.c	\
		ft_numlength_base.c	\
		ft_ftoa.c			\
		ft_strrplc.c		\
		ft_round_float.c	\
		ft_strsubf.c		\
		get_next_line.c
OBJE = $(subst .c,.o,$(SRCS))

GREEN = \033[0;32m
RED = \033[0;31m
END = \033[0m

all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRCS)
	ar rc $(NAME) $(OBJE)
	ranlib $(NAME)
	@echo "$(NAME): $(GREEN)Object files were created$(END)"
	@echo "$(NAME): $(GREEN)$(NAME) was created$(END)"

clean:
	rm -f $(OBJE)
	@echo "$(NAME): $(RED)All object files were deleted.$(END)"

fclean:	clean
	rm -f $(NAME)
	@echo "$(NAME): $(RED)$(NAME) was deleted$(END)"

re:	fclean all

.PHONY: all clean fclean re
.PRECIOUS: author
