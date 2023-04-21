/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_same_nums.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 12:16:49 by aabel             #+#    #+#             */
/*   Updated: 2023/03/23 13:01:12 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_checks(t_list *list, int num, int j)
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
		if (ft_checks(list, list->sa[i], i) == 1)
			i++;
		else
			return (-1);
	}
	return (0);
}
