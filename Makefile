# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: genouf <genouf@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 20:01:03 by genouf            #+#    #+#              #
#    Updated: 2022/04/30 18:36:36 by genouf           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = sources/ft_printf.c sources/functions_utils_b.c sources/functions_utils.c

OBJS = ${SRCS:.c=.o}
OBJS_BONUS = ${BONUS:.c=.o}

NAME = libftprintf.a

CC	= gcc
RM 	= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar rcs ${NAME} ${OBJS}	

all:	${NAME}

clean:
		${RM} ${OBJS} ${OBJS_BONUS}

fclean:	clean
		${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean bonus re