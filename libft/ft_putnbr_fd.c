/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:37:07 by artuda-s          #+#    #+#             */
/*   Updated: 2024/04/18 13:41:14 by artuda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char *s = ft_itoa(n);
    write(fd, s, ft_strlen(s));
}

/* #include <stdio.h>
int main()
{
    ft_putnbr_fd(12345, 1);
    printf("\n");
    return 0;
} */