/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:04:40 by artuda-s          #+#    #+#             */
/*   Updated: 2024/04/12 17:08:18 by artuda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    const char * pstr;
    while (n > 0 && *pstr)
    {
        if (*pstr == (char)c)
            return ((char *)pstr);
        pstr++;
        n--;
    }
    return (NULL);        
}
