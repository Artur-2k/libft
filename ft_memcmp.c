/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:10:34 by artuda-s          #+#    #+#             */
/*   Updated: 2024/04/12 17:12:03 by artuda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    const char *pstr1;
    const char *pstr2;

    pstr1 = str1;
    pstr2 = str2;
    while (n > 0)
    {
        if (*pstr1 != *pstr2)
            return (*pstr1 - *pstr2);
        pstr1++;
        pstr2++;
        n--;
    }
}
