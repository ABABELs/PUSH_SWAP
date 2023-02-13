/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_same_nums.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:16:49 by aabel             #+#    #+#             */
/*   Updated: 2023/02/13 13:09:27 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static int	ft_check(t_list *list, int num, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		if (list->sa[i] == num)
			return (0);
		i++;
	}
	return (1);
}

int	check_same_nums(t_list *list)
{
	int	i;

	i = 0;
	while (i <= list->sia - 1)
	{
		if (ft_check(list, list->sa[i], i) == 1)
			i++;
		else
			return (-1);
	}
	return (0);
}
