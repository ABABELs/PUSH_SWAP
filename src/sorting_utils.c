/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:10:36 by arthurabel        #+#    #+#             */
/*   Updated: 2023/04/20 15:30:52 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	find_rank(t_list *list)
{
	int	i;
	int	rank;

	i = 0;
	rank = 0;
	while (i <= list->sia)
	{
		if (list->sa[i] < list->sa[0])
			rank++;
		i++;
	}
	return (rank);
}

void	put_lower_in_first(t_list *list)
{
	int	low_rank;
	int	pos;

	low_rank = find_low_number(list);
	pos = find_eazy_ways(list->sa, list->sia, low_rank);
	while ((list->sa[0] != low_rank && pos <= (list->sia) / 2))
	{
		ra(list, 1);
	}
	while (list->sa[0] != low_rank && pos > (list->sia) / 2)
		rra(list, 1);
}

int	find_eazy_ways(int *sb, int sib, int rank)
{
	int		i;

	i = 0;
	while (i < sib)
	{
		if (sb[i] == rank)
			return (i);
		i++;
	}
	return (i);
}

void	put_higher(t_list *list, int high_rank, int pos)
{
	int		second_rank;
	int		i;

	i = 0;
	while (list->sib > 0)
	{
		high_rank = find_big_number_in_b(list);
		second_rank = find_second_big_number_in_b(list, high_rank);
		pos = find_eazy_ways(list->sb, list->sib, high_rank);
		while ((list->sb[i]) != high_rank)
		{
			if ((list->sb[i]) == second_rank)
				pa(list, 1);
			else if (pos < list->sib / 2)
				rb(list, 1);
			else
				rrb(list, 1);
		}
		pa (list, 1);
		if (list->sa[0] > list->sa[1] && list->sia > 1)
			sa(list->sa, 1);
	}
}
