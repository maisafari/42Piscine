# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mariza <mariza@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/08 22:20:21 by tpereira          #+#    #+#              #
#    Updated: 2021/03/05 11:27:50 by mariza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC			= gcc
FLAGS		= -Wall -Werror -Wextra
SRCS = ft_memset.c		\
		ft_bzero.c		\
		ft_memcpy.c		\
		ft_memccpy.c		\
		ft_memmove.c 	\
		ft_memchr.c		\
		ft_memcmp.c		\
		ft_strlen.c		\
		ft_isalpha.c 	\
		ft_isdigit.c		\
		ft_isalnum.c		\
		ft_isascii.c		\
		ft_isprint.c		\
		ft_toupper.c		\
		ft_tolower.c		\
		ft_strchr.c		\
		ft_strrchr.c		\
		ft_strncmp.c		\
		ft_strlcpy.c		\
		ft_strlcat.c		\
		ft_strnstr.c		\
		ft_atoi.c		\
		ft_calloc.c		\
		ft_strdup.c		\
		ft_substr.c		\
		ft_strjoin.c 	\
		ft_strtrim.c		\
		ft_split.c		\
		ft_itoa.c		\
		ft_strmapi.c		\
		ft_putchar_fd.c	\
		ft_putstr_fd.c	\
		ft_putendl_fd.c	\
		ft_putnbr_fd.c
BONUS =	ft_lstnew.c			\
		ft_lstadd_front.c	\
		ft_lstsize.c		\
		ft_lstlast.c		\
		ft_lstadd_back.c	\
		ft_lstclear.c		\
		ft_lstdelone.c		\
		ft_lstiter.c		\
		ft_lstmap.c			\
		$(SRCS)
OBJS		= ${SRCS:.c=.o}
BONUS_OBJS	=  ${BONUS:.c=.o}
RM			= rm -f

all: ${NAME}

.c.o:
			${CC} ${FLAGS} -I include -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
				ar -r ${NAME} ${OBJS}
			
bonus:		$(OBJS) $(BONUS_OBJS)
				ar -r $(NAME) $(OBJS) $(BONUS_OBJS)

so:
			${CC} ${FLAGS} -c ${OBJS:.o=.c} ${OBJS_BONUS:.o=.c}
				gcc -shared -o libft.so ${OBJS}

clean:
			${RM} ${OBJS}

fclean:	clean
			${RM} ${NAME}
			${RM} libft.so

re: fclean all

.PHONY: clean fclean all re