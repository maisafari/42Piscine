NAME = libft.a
HEAD = libft.h
SRC = ft_memset.c\
		ft_bzero.c\
		ft_strlcat.c\

OBJ = $(SRC:.c=.o)
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
				@ar -rc $(NAME) $(OBJ)
				@echo "$(NAME) created"
				@ranlib $(NAME)
				@echo "$(NAME) indexed"

%.o: %.c
				gcc $(FLAG) -c $< -o $@

clean:
				@rm -f $(OBJ)
				@echo "OBJ deleted"

fclean: clean
				@rm -f $(NAME)
				@echo "$(NAME) deleted"

re: fclean all

.PHONY: all, clean, fclean, re