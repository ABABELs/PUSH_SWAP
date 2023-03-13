/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:03:22 by aabel             #+#    #+#             */
/*   Updated: 2023/03/13 13:33:37 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <limits.h>
# include "../inc/libft/libft.h"

int			main(int argc, char **argv);
int			init_data(t_list *list);
int			check_args(int argc, char **argv);
int			check_num(char *s);
void		ft_free(t_list *list);
void		pa(t_list *list);
void		pb(t_list *list);
void		ra(t_list *list);
void		rb(t_list *list);
void		rr(t_list *list);
void		rra(t_list *list);
void		rrb(t_list *list);
void	    rrr(t_list *list);
void		sa(int *sa);
void		sb(int *sb);
void		swap(int *argv1, int *argv2);
int			arg_to_int(t_list *list, int argc, char **argv);
int			check_order(t_list *list);
void		ft_free2(t_list *list);
int			check_same_nums(t_list *list);
int			ft_checks(t_list *list, int num, int j);
void		size3(int *s, t_list *list);
void		size5(int *s, t_list *list);
int	        size5_2(int *s, t_list *list, int i);
void	    size4(int *s, t_list *list);
int	        check_split(char **temp_split);
int         lensplit(char **temp_split);
int	        arg_to_int_split(t_list *list, char **temp_split);
int	        ft_choose_size(t_list *list);
t_list      ft_argc2( char **argv, t_list *list);
t_list      ft_argc_max(int argc, char **argv, t_list *list);
#endif