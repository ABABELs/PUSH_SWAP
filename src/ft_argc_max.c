/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argc_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 13:04:10 by arthurabel        #+#    #+#             */
/*   Updated: 2023/04/13 16:44:48 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_list	ft_argc_max(int argc, char **argv, t_list *list)
{
	if (check_args(argc - 1, argv) == -1)
		ft_free(list);
	list->argc = argc - 1;
	list->error = 0;
	if (init_data(list) == -1)
		ft_free(list);
	if (arg_to_int(list, argc, argv) == -1)
	{
		ft_free(list);
	}
	return (*list);
}
