/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:00:59 by aabel             #+#    #+#             */
/*   Updated: 2023/02/21 10:05:13 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	size4(int *s, t_list *list)
{
	if (*list->sia == 4)
	{
		if (s[0] < s[1] && s[0] < s[2] && s[0] < s[3] && *list->sia == 4)
			pb(list);
		if (s[0] > s[1] && s[1] < s[2] && s[1] < s[3] && *list->sia == 4)
		{
			sa(list->sa);
			pb(list);
		}
		if (s[0] > s[2] && s[1] > s[2] && s[2] < s[3] && *list->sia == 4)
		{
			ra(list);
			sa(list->sa);
			pb(list);
		}
		if (s[0] > s[3] && s[1] > s[3] && s[2] > s[3] && *list->sia == 4)
		{
			rra(list);
			pb(list);
		}
	}
	if (*list->sia == 3)
		size3(list->sa, list);
	pa(list);
}

int	size5_2(int *s, t_list *list, int i)
{
	if (s[0] > s[2] && s[1] > s[2] && s[2] < s[3] && s[2] < s[4] && i == 0)
	{
		ra(list);
		sa(list->sa);
		pb(list);
		i++;
	}
	if (s[0] > s[3] && s[1] > s[3] && s[2] > s[3] && s[3] < s[4] && i == 0)
	{
		rra(list);
		rra(list);
		pb(list);
		i++;
	}
	if (s[0] > s[4] && s[1] > s[4] && s[2] > s[4] && s[3] > s[4] && i == 0)
	{
		rra(list);
		pb(list);
		i++;
	}
	return (i);
}

void	size5(int *s, t_list *list)
{
	int	i;

	i = 0;
	if (*list->sia == 5)
	{
		if (s[0] < s[1] && s[0] < s[2] && s[0] < s[3] && s[0] < s[4] && i == 0)
		{
			pb(list);
			i++;
		}
		if (s[0] > s[1] && s[1] < s[2] && s[1] < s[3] && s[1] < s[4] && i == 0)
		{
			sa(list->sa);
			pb(list);
			i++;
		}
		i = size5_2(list->sa, list, i);
	}
	size4(list->sa, list);
	if (i == 1)
	{
		pa(list);
		if (s[0] > s[1])
			sa(list->sa);
	}
}
