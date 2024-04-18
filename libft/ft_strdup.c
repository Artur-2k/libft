/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:53:26 by artuda-s          #+#    #+#             */
/*   Updated: 2024/04/16 19:12:38 by artuda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str)
{
    char *pstr;
    size_t i;

    pstr = (char *)malloc(sizeof(char) * (ft_strlen((const char*)str) + 1));
    if (!pstr)
        return (NULL);
    i = 0;
    while (str[i])
    {
        pstr[i] = str[i];
        i++;
    }
    i = 0;  
    return(pstr);
}
