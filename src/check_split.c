/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 11:30:57 by arthurabel        #+#    #+#             */
/*   Updated: 2023/03/01 12:11:19 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	check_split(char **temp_split)
{
	int	i;

	i = -1;
	while (temp_split[++i])
	{
		if (check_num(&temp_split[i][0]) == -1 || temp_split[i][0] == '\0')
			return (-1);
	}
	return (0);
}
