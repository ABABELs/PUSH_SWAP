# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabel <aabel@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 14:39:17 by aabel             #+#    #+#              #
#    Updated: 2023/01/30 14:38:58 by aabel            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCS = push_swap.c	check_args.c	check_num.c	ft_free.c	lsttools.c	pa.c \
	pb.c	ra.c	rb.c	rr.c	rra.c	rrb.c	rrr.c	sa.c	sb.c	\
	swap.c	utils.c	\

INCLUDE = push_swap.h

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

%.o: %.c
				@${CC} ${CFLAGS} $< -o $(<:.c=.o)

OBJS = ${SRCS:.c=.o}

all:	${NAME}

${NAME}: ${OBJS} @${CC} ${SRCS} -o ${NAME}

clean:
			@${RM} ${OBJS}

fclean: 
			@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re