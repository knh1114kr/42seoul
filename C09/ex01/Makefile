# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nakyoung <nakyoung@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/24 13:23:41 by nakyoung          #+#    #+#              #
#    Updated: 2022/02/24 16:30:57 by nakyoung         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS    = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}
HEAD	= includes
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a

.c.o:
			${CC} ${CFLAGS} -I ${HEAD} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar -rc ${NAME} ${OBJS}

all :		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
