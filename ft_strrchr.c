/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:30:16 by artuda-s          #+#    #+#             */
/*   Updated: 2024/04/12 16:53:48 by artuda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *str, int c)
{
    int i;

    i = ft_strlen((char*)str);
    str = str + i;
    while (i >= 0)
    {
        if (*str == c)
            return ((char *)str);
        str--;
        i--;
    }   
    return (NULL);    
}
