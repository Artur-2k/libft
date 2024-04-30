#include "ft_printf.h"

int    ft_strchr(const char *s, int c)
{
        while (*s != (char)c)
        {
                if (!*s)
                        return (0);
                s++;
        }
        return (1);
}
void	ft_putnum_base(long long num, int lbase, char *base_symbols, t_data *data)
{
	if (num < 0)
	{
		data->n_chars += write(1, "-", 1);
		num = -num;
	}
	if(num < lbase)
		data->n_chars += write(1, &base_symbols[num], 1);
	else
	{
		ft_putnum_base(num / lbase, lbase, base_symbols, data);
		ft_putnum_base(num % lbase, lbase, base_symbols, data);
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
	while(*s)
	{
		data->n_chars += write(1, s, 1);
		s++;
	}
}
