/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:08:09 by aabel             #+#    #+#             */
/*   Updated: 2023/01/25 14:04:13 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init_data(t_list *list)
{
	list->sa = malloc(sizeof(int) * list->argc);
	if (!list->sa)
	{
		free(list);
		return (-1);
	}
	list->sp = malloc(sizeof(int) * list->argc);
	if (!list->sp)
	{
		free(list->sa);
		free(list);
		return (-1);
	}
	list->sb = malloc(sizeof(int) * list->argc);
	if (!list->sb)
	{
		free(list->sp);
		free(list->sa);
		free(list);
		return (-1);
	}
	list->sia = list->argc;
	list->sib = 0;
	list->sip = list->argc;
	return (0);
}

int	main(int argc, char **argv)
{
	t_list	*list;

	if (argc == 1)
		return (0);
	list = malloc(sizeof(t_list));
	if (!list)
		return (0);
	if (check_args(argv, argc - 1) == -1)
		ft_free(list);
}
