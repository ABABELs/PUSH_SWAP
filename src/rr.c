/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:14:56 by aabel             #+#    #+#             */
/*   Updated: 2023/04/14 13:19:24 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rr(t_list *list, int true)
{
	int	i;

	i = 0;
	while (i + 1 < list->sia)
	{
		swap(&list->sa[i], &list->sa[i + 1]);
		i++;
	}
	i = 0;
	while (i + 1 < list->sib)
	{
		swap(&list->sb[i], &list->sb[i + 1]);
		i++;
	}
	if (true)
		write(1, "rr\n", 3);
}
