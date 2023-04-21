/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:14:44 by aabel             #+#    #+#             */
/*   Updated: 2023/02/02 15:07:58 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	check_args(int argc, char **argv)
{
	int	i;

	i = -1;
	while (++i < argc)
	{
		if (check_num(argv[i + 1]) == -1 || *argv[i + 1] == '\0')
		{
			return (-1);
		}
	}
	return (0);
}