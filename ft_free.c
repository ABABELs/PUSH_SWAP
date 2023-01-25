/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:22:58 by aabel             #+#    #+#             */
/*   Updated: 2023/01/25 14:04:28 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_list *list)
{
	if (list->sa)
	{
		free(list->sa);
	}
	if (list->sb)
	{
		free(list->sb);
	}
	if (list->sp)
	{
		free(list->sp);
	}
	if (list)
	{
		free(list);
	}
	write(2, "Error\n", 6);
	exit(0);
}
