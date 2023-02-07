/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:50:43 by aabel             #+#    #+#             */
/*   Updated: 2023/02/07 13:07:24 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_error(t_list *list, int nbr)
{
	nbr = 0;
	list->atoierror = 1;
	return (nbr);
}

int	ft_atoi(const char *str, t_list *list)
{
	int				i;
	int				neg;
	long long int	n;

	i = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	n = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
		if (n > ((long long int)INT_MAX + 1) && neg == -1)
			return (ft_error(list, n));
		if (n > INT_MAX && neg == 1)
			return (ft_error(list, n));
	}
	return (neg * n);
}
