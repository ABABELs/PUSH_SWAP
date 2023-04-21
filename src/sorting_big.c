/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_big.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 11:57:31 by arthurabel        #+#    #+#             */
/*   Updated: 2023/04/20 15:25:16 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	sorting_more(t_list *list)
{
	if (list->sia <= 25)
		sorting_small(list);
	else if (list->sia > 25)
		sorting_big(&list->sia, list);
}

void	sorting_small(t_list *list)
{
	while (list->sia != 0)
	{
		put_lower_in_first(list);
		pb(list, 1);
	}
	while (list->sib != 0)
		pa(list, 1);
}

int	define_chunk_size(int *s)
{
	int	size;

	size = *s;
	if (*s <= 100)
		size = *s / 8;
	else if (*s <= 150)
		size = *s / 4;
	else if (*s <= 200)
		size = *s / 4;
	else if (*s > 400)
		size = *s / 26;
	return (size);
}

void	sorting_big(int *size, t_list *list)
{
	int	chunk_size;
	int	npb;

	npb = 0;
	chunk_size = define_chunk_size(size);
	while ((list->sia) > chunk_size)
	{
		pb_chunk(list, npb++, chunk_size);
	}
	while (list->sia > 0)
	{
		put_lower_in_first(list);
		pb(list, 1);
	}
	put_higher(list, 0, 0);
}

void	pb_chunk(t_list *list, int npb, int size)
{
	while ((list->sib) < (size * 2 * npb))
	{
		if (find_rank(list) < size)
		{
			pb(list, 1);
		}
		else if (find_rank(list) >= size && find_rank(list) <= (size * 2))
		{
			pb(list, 1);
			rb(list, 1);
		}
		else
			ra(list, 1);
	}
}
