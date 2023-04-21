/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:18:18 by aabel             #+#    #+#             */
/*   Updated: 2023/04/14 13:20:05 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rrb(t_list *list, int true)
{
	int	i;

	i = (list->sib - 1);
	while (i - 1 >= 0)
	{
		swap(&list->sb[i], &list->sb[i - 1]);
		i--;
	}
	if (true)
		write(1, "rrb\n", 4);
}
