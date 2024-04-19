/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:05:19 by artuda-s          #+#    #+#             */
/*   Updated: 2024/04/19 18:41:38 by artuda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
#include <unistd.h>

typedef struct  s_list
{
    void *content;
    struct s_list *next;
    
}   t_list;

t_list *ft_lstlast(t_list *lst);
void    ft_putchar_fd(char c, int fd);
int	ft_atoi(const char *str);
void	ft_bzero(void *str, size_t n);
void	*ft_calloc(size_t nitems, size_t size);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isalpha(int c);
int	ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memchr(const void *str, int c, size_t n);
int	ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *str, int c, size_t n);
char	*strchr(const char *s, int c);
char	*ft_strdup(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
int	strlcat(char *dst, const char *src, size_t size);
int	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int	ft_strncmp(char *str1, char *str2, int n);
char	*ft_strnstr(const char *big,	const char *little, size_t len);
char	*ft_strrchr(const char *str, int c);
char	**ft_split(const char *s, char c);
char	*ft_strtrim(const char  *s1, const char *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int	tolower(int c);
int	toupper(int c);
void ft_putchar_fd(char c, int fd);



#endif