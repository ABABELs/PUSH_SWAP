/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilssssss.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:46:55 by arthurabel        #+#    #+#             */
/*   Updated: 2023/04/12 14:42:43 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	print_list(t_list *list)
{
	int	i;

	i = 0;
	while (i < list->sip)
	{
		printf("%d\n", list->sa[i++]);
	}
}

int	find_low_number(t_list *list)
{
	int	i;
	int	mem;

	i = 1;
	mem = list->sa[0];
	while (i < list->sia)
	{
		if (list->sa[i] < mem)
			mem = list->sa[i];
		i++;
	}
	return (mem);
}

int	find_second_big_number_in_b(t_list *list, int big)
{
	int	nbmax;
	int	i;

	i = 1;
	nbmax = list->sb[0];
	while (i < list->sib)
	{
		if (list->sb[i] > nbmax && list->sb[i] < big)
			nbmax = list->sb[i];
		i++;
	}
	return (nbmax);
}

int	find_big_number_in_b(t_list *list)
{
	int	nbmax;
	int	i;

	i = 1;
	nbmax = list->sb[0];
	while (i < list->sib)
	{
		if (list->sb[i] > nbmax)
			nbmax = list->sb[i];
		i++;
	}
	return (nbmax);
}

int	is_sorted(t_list *list)
{
	int	i;

	i = 0;
	while (list->sa)
	{
		if (list->sa[i] > list->sa[i + 1])
			return (0);
		i++;
	}
	return (1);
}
