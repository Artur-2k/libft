/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:04:40 by artuda-s          #+#    #+#             */
/*   Updated: 2024/04/16 12:45:50 by artuda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
    const char * pstr;

    pstr = (const char *)str;
    while (n > 0 && *pstr)
    {
        if (*pstr == (char)c)
            return ((void *)pstr);
        pstr++;
        n--;
    }
    return (NULL);        
}
