/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:30:16 by artuda-s          #+#    #+#             */
/*   Updated: 2024/04/16 18:24:36 by artuda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *str, int c)
{
    int i;

    i = ft_strlen(str);
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
