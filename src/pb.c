/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 13:51:24 by aabel             #+#    #+#             */
/*   Updated: 2023/04/14 13:18:22 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	pb(t_list *list, int true)
{
	int	i;

	i = list->sib;
	list->sib += 1;
	list->sia -= 1;
	while (i > 0)
	{
		swap(&list->sb[i], &list->sb[i - 1]);
		i--;
	}
	list->sb[0] = list->sa[0];
	i = 0;
	while (i <= list->sia - 1)
	{
		list->sa[i] = list->sa[i + 1];
		i++;
	}
	if (true)
		write(1, "pb\n", 3);
}
