/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:53:52 by aabel             #+#    #+#             */
/*   Updated: 2023/03/09 14:27:12 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_free2(t_list *list)
{
	if (list->sa)
	{
		free((list->sa));
		list->sa = NULL;
	}
	if (list->sb)
	{
		free(list->sb);
		list->sb = NULL;
	}
	if (list->sp)
	{
		free(list->sp);
		list->sp = NULL;
	}
	if (list)
	{
		free(list);
		list = NULL;
	}
	exit (0);
}
