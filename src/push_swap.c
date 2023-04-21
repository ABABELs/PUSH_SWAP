/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:08:09 by aabel             #+#    #+#             */
/*   Updated: 2023/04/20 13:28:07 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	ft_choose_size(t_list *list)
{
	if (check_same_nums(list) == -1)
		return (-1);
	else
	{
		if (list->argc == 3 || list->argc == 2)
			size3(list->sa, list);
		if (list->argc < 6 && list->argc >= 4)
			size5(list->sa, list);
		if (list->argc >= 6)
			sorting_more(list);
	}
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
	if (argc == 2)
		*list = ft_argc2(argv, list);
	else if (argc > 2)
	{
		*list = ft_argc_max(argc, argv, list);
	}
	if (check_order(list) == -1)
		ft_free2(list);
	if (ft_choose_size(list) == -1)
		ft_free(list);
	ft_free2(list);
	return (0);
}
