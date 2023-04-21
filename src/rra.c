/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:11:06 by aabel             #+#    #+#             */
/*   Updated: 2023/04/14 13:19:43 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rra(t_list *list, int true)
{
	int	i;

	i = (list->sia - 1);
	while (i > 0)
	{
		swap(&list->sa[i], &list->sa[i - 1]);
		i--;
	}
	if (true)
		write(1, "rra\n", 4);
}
