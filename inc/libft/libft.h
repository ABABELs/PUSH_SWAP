/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arthurabel <arthurabel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:34:23 by aabel             #+#    #+#             */
/*   Updated: 2023/04/13 15:27:15 by arthurabel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <limits.h>

typedef struct s_list
{
	int				*sa;
	int				*sb;
	int				*sp;
	int				sia;
	int				sib;
	int				sip;
	int				argc;
	int				error;
	int				atoierror;
}					t_list;

int		ft_strlen(const char *str);
char	*ft_strrchr(const char *s, int c);
int		ft_atoi(const char *str, t_list *list);
void	ft_bzero(void *str, size_t c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *pointer, int c, size_t size);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_tolower(int c);
int		ft_toupper(int c);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *src);
char	*ft_substr(char const *s, int start, int len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
int		ft_printf(const char *input, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_check(va_list ap, const char *input, char c);
int		ft_putnbr_hexa(unsigned long nbr, const char input, int init);
int		ft_ptrlen(unsigned long long ptr);
int		ft_putnbr(long long n, int init);
int		ft_putnbr_u(unsigned int n, int init);
void	ft_init(size_t *i, int *result);
int		ft_error(t_list *list, int nbr);

#endif