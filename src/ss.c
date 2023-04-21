/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 14:30:53 by arthurabel        #+#    #+#             */
/*   Updated: 2023/04/14 13:21:25 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ss(t_list *list, int true)
{
	int	temp_1;
	int	temp_2;

	temp_1 = list->sa[0];
	list->sa[0] = list->sa[1];
	list->sa[1] = temp_1;
	temp_2 = list->sb[0];
	list->sb[0] = list->sb[1];
	list->sb[1] = temp_2;
	if (true)
		write(1, "ss\n", 3);
}
