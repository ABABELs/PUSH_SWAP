/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 09:34:12 by arthurabel        #+#    #+#             */
/*   Updated: 2023/04/14 13:44:50 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	size3(int *s, t_list *list)
{
	if (list->sia == 2)
	{
		if (s[0] > s[1])
			sa(s, 1);
	}
	else if (s[0] < s[1] && s[0] < s[2] && s[1] < s[2])
		;
	else if (s[0] < s[1] && s[0] < s[2] && s[1] > s[2])
	{
		rra(list, 1);
		sa(s, 1);
	}
	else if (s[0] > s[1] && s[0] < s[2] && s[1] < s[2])
		sa(s, 1);
	else if (s[0] < s[1] && s[0] > s[2] && s[1] > s[2])
		rra(list, 1);
	else if (s[1] < s[2] && s[0] > s[1] && s[0] > s[2])
		ra(list, 1);
	else if (s[1] > s[2] && s[0] > s[1] && s[0] > s[2])
	{
		ra(list, 1);
		sa(s, 1);
	}
}
