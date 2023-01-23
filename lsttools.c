/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lsttools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:17:00 by aabel             #+#    #+#             */
/*   Updated: 2023/01/23 12:31:57 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*list;

	list = malloc(sizeof(t_list));
	if (list == NULL)
		return (NULL);
	list->next = NULL;
	list->content = content;
	return (list);
}

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*tmp;

	tmp = ft_lstlast(*list);
	if (!tmp)
		*list = new;
	else
		tmp->next = new;
}

int	ft_lstsize(t_list *list)
{
	int	i;

	i = 0;
	if (list == NULL)
		return (0);
	while (lst)
	{
		i++;
		list = list->next;
	}
	return (i);
}

t_list	*ft_lstlast(t_list *list)
{
	int	compt;

	compt = ft_lstsize(list);
	while (compt-- && compt)
		list = list->next;
	return (list);
}

void	ft_lstdelone(t_list *list, void (*del)(void*))
{
	if (list && del)
	{
		del(list->content);
		free(list);
	}
}
