/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 11:55:11 by aabel             #+#    #+#             */
/*   Updated: 2023/02/07 11:56:03 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	check_order(t_list *list)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < list->argc - 1)
	{
		if (list->sa[j] < list->sa[j + 1])
			i++;
		j++;
	}
	if (i == j)
		return (-1);
	else
		return (0);
}