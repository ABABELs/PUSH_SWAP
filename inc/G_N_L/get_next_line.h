/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:35:47 by aabel             #+#    #+#             */
/*   Updated: 2023/04/13 16:13:57 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
int		ft_strchr_bis(char *s, int c);
void	*ft_calloc(size_t count, size_t size);
size_t	ft_strlen_bis(const char *str);
char	*ft_strjoin_bis(char *s1, char *s2, int j, int i);
char	*read_file(int fd, char *buffer_static, char *buffer);
char	*ft_oneline(char *buffer);
char	*ft_savenext(char *buffer);
char	*ft_lstfree(char **buffer);
void	ft_bzero(void *str, size_t len);

#endif
