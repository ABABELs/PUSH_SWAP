/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argc2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:02:35 by arthurabel        #+#    #+#             */
/*   Updated: 2023/03/13 12:08:24 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_list ft_argc2(int argc, char **argv, char **temp_split, t_list *list)
{
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
		    return (0);
	    }
    return (list);
}