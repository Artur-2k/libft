/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 13:42:47 by artuda-s          #+#    #+#             */
/*   Updated: 2024/04/30 17:33:43 by artuda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nchars(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		nchars;
	char	*str;
	
	nchars = ft_nchars(n);
	str = (char *)malloc(sizeof(char) * (1 + nchars));
	if (!str)
		return (NULL);
	auto long nb = n;
	str[nchars] = 0;
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb)
	{
		str[--nchars] = nb % 10 + 48;
		nb /= 10;
	}
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	char *str = ft_itoa(123);
	if (str == NULL)
		printf("n deu\n");
	else
		printf("%s\n", str);
	free(str);
	return (0);
}   */