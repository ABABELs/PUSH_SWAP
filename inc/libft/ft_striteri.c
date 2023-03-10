/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:30:04 by aabel             #+#    #+#             */
/*   Updated: 2022/11/07 15:34:58 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	if (s != NULL && f != NULL)
	{
		i = ft_strlen(s);
		while (n < i)
		{
			(*f)(n, s);
			s++;
			n++;
		}
	}
}
