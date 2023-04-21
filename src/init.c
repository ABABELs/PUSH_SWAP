/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 17:26:45 by arthurabel        #+#    #+#             */
/*   Updated: 2023/04/20 15:38:04 by arthurabel       ###   ########.fr       */
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
	list->sia = list->argc;
	list->sip = list->argc;
	list->sib = 0;
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

int	arg_to_int_split(t_list *list, char **temp_split)
{
	int	i;

	i = 0;
	while (temp_split[i])
	{
		if (check_num(&temp_split[i][0]) == -1)
			return (-1);
		list->sa[i] = ft_atoi(&temp_split[i][0], list);
		if (list->atoierror == 1)
			return (-1);
		list->sp[i] = ft_atoi(&temp_split[i][0], list);
		i++;
	}
	return (0);
}
