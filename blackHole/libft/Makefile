# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mariza <mariza@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/08 22:20:21 by tpereira          #+#    #+#              #
#    Updated: 2021/03/02 16:41:47 by mariza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC			= gcc
FLAGS		= -Wall -Werror -Wextra
SRCS		= ${wildcard *.c}
OBJS		= ${SRCS:.c=.o}
CFLAGS		:=	-ansi -pedantic -Wall -Wextra -Werror -g3 -fPIC
RM			= rm -f

.c.o:
			${CC} ${FLAGS} -I include -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			ar -rcs ${NAME} ${OBJS}
			ranlib ${NAME}
			
bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

so:
			${CC} ${CFLAGS} -c ${OBJS:.o=.c} ${OBJS_BONUS:.o=.c}
			gcc -shared -o libft.so ${OBJS}

all: ${NAME}

clean:
			${RM} ${OBJS}

fclean:	clean
			${RM} ${NAME}
			${RM} libft.so

re: fclean all

.PHONY: clean fclean all re