/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:12:21 by aabel             #+#    #+#             */
/*   Updated: 2023/02/03 11:57:44 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rb(t_list *list)
{
	int	i;

	i = 0;
	while (i + 1 < *list->sib)
	{
		swap(&list->sb[i], &list->sb[i + 1]);
		i++;
	}
	write(1, "rb\n", 3);
}
