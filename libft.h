/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:05:19 by artuda-s          #+#    #+#             */
/*   Updated: 2024/04/16 19:16:10 by artuda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

size_t     ft_strlen(const char *str);
void	ft_bzero(void *str, size_t n);
char    *ft_strdup(const char *str);
void    *ft_calloc(size_t nitems, size_t size);

#endif