/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:53:26 by artuda-s          #+#    #+#             */
/*   Updated: 2024/04/15 15:54:44 by artuda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

char *strdup(const char *str)
{
    char *pstr;
    size_t i;

    pstr = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
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
