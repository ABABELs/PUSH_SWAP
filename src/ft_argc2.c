/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argc2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:02:35 by arthurabel        #+#    #+#             */
/*   Updated: 2023/04/20 16:12:31 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_list	ft_argc2(char **argv, t_list *list)
{
	char	**temp_split;
	int		i;

	i = 0;
	temp_split = ft_split(argv[1], ' ');
	if (check_split(temp_split) == -1)
		ft_free(list);
	list->argc = lensplit(temp_split);
	list->error = 0;
	if (init_data(list) == -1)
		ft_free(list);
	if (arg_to_int_split(list, temp_split) == -1)
	{
		ft_free(list);
	}
	while (temp_split[i])
		free(temp_split[i++]);
	free(temp_split);
	return (*list);
}
