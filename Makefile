# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 14:39:17 by aabel             #+#    #+#              #
#    Updated: 2023/03/10 13:27:19 by arthurabel       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = ./src/push_swap.c ./src/check_args.c ./src/check_num.c ./src/ft_free.c ./src/pa.c \
						./src/pb.c ./src/ra.c ./src/rb.c ./src/rr.c ./src/rra.c ./src/rrb.c ./src/rrr.c ./src/sa.c ./src/sb.c \
						./src/swap.c ./src/check_order.c ./src/ft_free2.c ./src/check_same_nums.c \
						./src/size3.c ./src/size5.c ./src/check_split.c \


CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -g3

LIBFT_DIR = inc/libft/

%.o: %.c
				@${CC} ${CFLAGS} -c $< -o $@

OBJS =  ${SRC:.c=.o}



all:	$(NAME)

$(NAME): $(OBJS) $(SRC)
		@make -C inc/libft
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT_DIR)libft.a

clean:
			@${RM} ${OBJS}
			make -C inc/libft/ clean

fclean: clean
			@${RM} ${NAME}
			make -C inc/libft/ fclean

re: fclean all

.PHONY: all clean fclean re