/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:50:01 by aabel             #+#    #+#             */
/*   Updated: 2023/03/13 13:20:52 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	pa(t_list *list)
{
	int	i;

	i = *list->sia;
	list->sib = list->sib - 1;
	list->sia = list->sia + 1;
	while (i > 0)
	{
		swap(&list->sa[i], &list->sa[i - 1]);
		i--;
	}
	list->sa[0] = list->sb[0];
	write(1, "pa\n", 3);
}
