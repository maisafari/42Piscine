NAME = libft.a
HEAD = libft.h
SRC =	ft_memset.c\
		ft_bzero.c\
<<<<<<< HEAD
		ft_memcpy.c\
		ft_memccpy.c\
		ft_memmove.c\
		ft_strrchr.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_strlen.c\
		ft_strlcpy.c\
		ft_strchr.c\
		ft_strnstr.c\
		ft_strlcat.c\
=======
		ft_strlcat.c\

>>>>>>> 8ee8edc6e8a43475ad63d470196cc4a062673e62
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
				@echo "$(OBJ) deleted"

fclean: clean
				@rm -f $(NAME)
				@echo "$(NAME) deleted"

re: fclean all

.PHONY: all, clean, fclean, re