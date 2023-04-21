/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:09:14 by aabel             #+#    #+#             */
/*   Updated: 2023/04/14 13:18:43 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ra(t_list *list, int true)
{
	int		i;

	i = 0;
	while (i + 1 < list->sia)
	{
		swap(&list->sa[i], &list->sa[i + 1]);
		i++;
	}
	if (true)
		write(1, "ra\n", 3);
}
