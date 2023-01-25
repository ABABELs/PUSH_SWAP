/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:50:01 by aabel             #+#    #+#             */
/*   Updated: 2023/01/25 14:04:20 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list *list)
{
	int	i;

	i = list->sia;
	list->sib = list->sib - 1;
	list->sia = list->sia + 1;
	while (i > 0)
	{
		swap(&list->sa[i], &list->sa[i - 1]);
		i--;
	}
	list->sa[0] = list->sb[0];
	i = 0;
	while (i <= list->sib)
	{
		list->sb[i] = list->sb[i + 1];
		i++;
	}
	write(1, "pa\n", 3);
}
