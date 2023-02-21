/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:08:09 by aabel             #+#    #+#             */
/*   Updated: 2023/02/21 09:40:46 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

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
	list->sia = &list->argc;
	list->sib = 0;
	list->sip = &list->argc;
	return (0);
}

int	arg_to_int(t_list *list, int argc, char **argv)
{
	int	i;

	i = 0;
	while (i != argc - 1)
	{
		if (check_num(argv[i + 1]) == -1)
			return (-1);
		list->sa[i] = ft_atoi(argv[i + 1], list);
		if (list->atoierror == 1)
			return (-1);
		list->sp[i] = ft_atoi(argv[i + 1], list);
		i++;
	}
	return (0);
}

int	ft_choose_size(int argc, t_list *list)
{
	if (check_same_nums(list) == -1)
		return (-1);
	else
	{
		if (argc == 3 || argc == 4)
			size3(list->sa, list);
		if (argc < 7 && argc > 4)
			size5(list->sa, list);
		// if (argc < 102 && argc > 6)
		// 	size100(list);
		// if (argc > 101)
		// 	size500(list);
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
	if (check_args(argc - 1, argv) == -1)
		ft_free(list);
	list->argc = argc - 1;
	list->error = 0;
	if (init_data(list) == -1)
		ft_free(list);
	if (arg_to_int(list, argc, argv) == -1)
	{
		ft_free(list);
		return (0);
	}
	if (check_order(list) == -1)
		ft_free2(list);
	if (ft_choose_size(argc, list) == -1)
		ft_free(list);
	ft_free2(list);
	return (0);
}
