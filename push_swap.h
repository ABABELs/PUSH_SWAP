/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabel <aabel@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:03:22 by aabel             #+#    #+#             */
/*   Updated: 2023/01/25 14:35:36 by aabel            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	int				*sa;
	int				*sb;
	int				*sp;
	int				*sia;
	int				*sib;
	int				*sip;
	int				argc;
	struct s_list	*back;
	struct s_list	*next;
}					t_list;

#endif