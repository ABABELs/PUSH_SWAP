# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 14:39:17 by aabel             #+#    #+#              #
#    Updated: 2023/04/13 17:47:08 by arthurabel       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = 	src/push_swap.c \
		src/init.c \
		src/check_args.c \
		src/check_num.c \
		src/ft_free.c \
		src/pa.c \
		src/pb.c \
		src/ra.c \
		src/rb.c \
		src/rr.c \
		src/rra.c \
		src/rrb.c \
		src/rrr.c \
		src/sa.c \
		src/sb.c \
		src/ss.c \
		src/swap.c \
		src/check_order.c \
		src/ft_free2.c \
		src/check_same_nums.c \
		src/size3.c \
		src/size5.c \
		src/check_split.c \
		src/lensplit.c \
		src/ft_argc2.c \
		src/ft_argc_max.c \
		src/sorting_big.c \
		src/sorting_utils.c \
		src/utilssssss.c \

SRCBONUS =	src/checker/checker.c \
			src/init.c \
			src/check_args.c \
			src/check_num.c \
			src/ft_free.c \
			src/pa.c \
			src/pb.c \
			src/ra.c \
			src/rb.c \
			src/rr.c \
			src/rra.c \
			src/rrb.c \
			src/rrr.c \
			src/sa.c \
			src/sb.c \
			src/ss.c \
			src/swap.c \
			src/check_order.c \
			src/ft_free2.c \
			src/check_same_nums.c \
			src/size3.c \
			src/size5.c \
			src/check_split.c \
			src/lensplit.c \
			src/ft_argc2.c \
			src/ft_argc_max.c \
			src/sorting_big.c \
			src/sorting_utils.c \
			src/utilssssss.c \
			inc/G_N_L/get_next_line.c \
			inc/G_N_L/get_next_line_utils.c \

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

LIBFT_DIR = inc/libft/libft.a

OBJS =  $(SRC:%.c=%.o)
OBJSBONUS = $(SRCBONUS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
		@make -C inc/libft
		@$(CC) -o push_swap $(OBJS) $(LIBFT_DIR)

bonus: $(OBJSBONUS)
		@make -C inc/libft
		@$(CC) -o checker $(OBJSBONUS) $(LIBFT_DIR)

clean:
			make -C inc/libft/ clean
			@$(RM) $(OBJS) $(OBJSBONUS)

fclean: clean
			@$(RM) $(NAME) $(OBJSBONUS)
			@$(RM) checker
			make -C inc/libft/ fclean

re: fclean all

.PHONY: all clean fclean re bonus