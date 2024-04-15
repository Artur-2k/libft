/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:47:52 by artuda-s          #+#    #+#             */
/*   Updated: 2024/04/12 17:58:23 by artuda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
    int result;
    int sign;    

    result = 0;
    sign = 1;
    if (*str == '+' || *str == '-')
    {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while(*str && '0' <= *str && *str <= '9')
    {
        result = result * 10 + *str - 48;
        str++;
    }
    return (result);
}