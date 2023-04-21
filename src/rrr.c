/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:42:07 by aabel             #+#    #+#             */
/*   Updated: 2023/04/14 13:20:22 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rrr(t_list *list, int true)
{
	int	i;

	i = (list->sia - 1);
	while (i > 0)
	{
		swap(&list->sa[i], &list->sa[i - 1]);
		i--;
	}
	i = (list->sib - 1);
	while (i - 1 >= 0)
	{
		swap(&list->sb[i], &list->sb[i - 1]);
		i--;
	}
	if (true)
		write(1, "rrr\n", 4);
}
