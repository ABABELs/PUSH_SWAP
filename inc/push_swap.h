/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:03:22 by aabel             #+#    #+#             */
/*   Updated: 2023/02/03 14:15:55 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include "../inc/libft/libft.h"

// typedef struct s_list
// {
// 	void			*content;
// 	int				*sa;
// 	int				*sb;
// 	int				*sp;
// 	int				*sia;
// 	int				*sib;
// 	int				*sip;
// 	int				argc;
// 	struct s_list	*back;
// 	struct s_list	*next;
// }					t_list;

int		main(int argc, char **argv);
int		init_data(t_list *list);
int		check_args(int argc, char **argv);
int		check_num(char *s);
void	ft_free(t_list *list);
void	pa(t_list *list);
void	pb(t_list *list);
void	ra(t_list *list);
void	rb(t_list *list);
void	rr(t_list *list);
void	rra(t_list *list);
void	rrb(t_list *list);
void	sa(int *sa);
void	sb(int *sb);
void	swap(int *argv1, int *argv2);

#endif