/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 13:27:32 by arthurabel        #+#    #+#             */
/*   Updated: 2023/04/21 14:23:10 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

void	check_output(char *line, t_list *list)
{
	if (!ft_strncmp(line, "sa\n", ft_strlen("sa\n")))
		sa(list->sa, 0);
	else if (!ft_strncmp(line, "sb\n", ft_strlen(line)))
		sb(list->sb, 0);
	else if (!ft_strncmp(line, "pa\n", ft_strlen(line)))
		pa(list, 0);
	else if (!ft_strncmp(line, "pb\n", ft_strlen(line)))
		pb(list, 0);
	else if (!ft_strncmp(line, "ra\n", ft_strlen(line)))
		ra(list, 0);
	else if (!ft_strncmp(line, "rb\n", ft_strlen(line)))
		rb(list, 0);
	else if (!ft_strncmp(line, "rr\n", ft_strlen(line)))
		rr(list, 0);
	else if (!ft_strncmp(line, "rra\n", ft_strlen(line)))
		rra(list, 0);
	else if (!ft_strncmp(line, "rrb\n", ft_strlen(line)))
		rrb(list, 0);
	else if (!ft_strncmp(line, "rrr\n", ft_strlen(line)))
		rrr(list, 0);
	else
		(write(2, "Error\n", 6), exit(1));
}

int	main(int argc, char **argv)
{
	char	*line;
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (!list || argc == 1)
		return (0);
	if (argc == 2)
		*list = ft_argc2(argv, list);
	else if (argc > 2)
		*list = ft_argc_max(argc, argv, list);
	line = get_next_line(0);
	while (line)
	{
		check_output(line, list);
		if (check_order(list) == -1)
			break ;
		line = get_next_line(0);
	}
	if (check_order(list) == -1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ft_free2(list);
	return (0);
}
