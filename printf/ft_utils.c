/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artuda-s <artuda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:37:59 by artuda-s          #+#    #+#             */
/*   Updated: 2024/04/30 18:51:22 by artuda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (0);
		s++;
	}
	return (1);
}

void	get_base(t_data *data)
{
	if (ft_strchr("diu", data->specifier))
	{
		data->lbase = BASE_10;
		data->base_symbols = DECIMAL;	
	}
	else if (ft_strchr("xp", data->specifier))
	{
		data->lbase = BASE_16;
		data->base_symbols = LOW_HEXA;
	}
	else
	{
		data->lbase = BASE_16;
		data->base_symbols = UP_HEXA;
	}
}
void	ft_putnum_base(long long num, t_data *data)
{
	get_base(data);
	if (num < 0)
	{
		data->n_chars += write(1, "-", 1);
		num = -num;
	}
	if (num < data->lbase)
		data->n_chars += write(1, &data->base_symbols[num], 1);
	else
	{
		ft_putnum_base(num / data->lbase, data);
		ft_putnum_base(num % data->lbase, data);
	}
}

void	ft_putchar(char c, t_data *data)
{
	data->n_chars += write(1, &c, 1);
}

void	ft_putstr(char *s, t_data *data)
{
	if (!s || !(*s))
		return ;
	while (*s)
	{
		data->n_chars += write(1, s, 1);
		s++;
	}
}
