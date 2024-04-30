//printf que funcione com %duipxXcs"
// chars will be prommoted to ints
// void *p  -> unsigned long
// xXu		-> unsigned long
// di		-> long

#include "ft_printf.h"

void	get_specifier(t_data *data, char specifier)
{
	if (specifier == '%')
		ft_putchar('%', data);
	else if (specifier == 'c')
		ft_putchar((char)va_arg(data->ap, int), data);
	else if (specifier == 's')
		ft_putstr(va_arg(data->ap, char *), data);
	else if (ft_strchr("diu", specifier))
		ft_putnum_base((long long)va_arg(data->ap, int) , BASE_10, DECIMAL, data);
	else if ("xXup")
	{
		if (specifier == 'X')
			ft_putnum_base((long long)va_arg(data->ap, int) , BASE_16, UP_HEXA, data);
		else if (specifier == 'p')
		{
			data->n_chars += write(1, "0x" , 2);
			ft_putnum_base((long long)va_arg(data->ap, void *) , BASE_16, LOW_HEXA, data);
		}
		else
			ft_putnum_base((long long)va_arg(data->ap, int) , BASE_16, LOW_HEXA, data);
	}
}

int	ft_printf(const char *fmt, ...)
{
	t_data	data;

	if (fmt == NULL || !(*fmt))
		return -1;
	data.n_chars = 0;
	va_start(data.ap, fmt);
	while (*fmt)
	{//123
		// if into % check next char
		if (*fmt == '%' && ft_strchr(SPECIFIERS, (char)*(fmt + 1)))
		{
		++fmt; // to skip the specifier char
		// get specifier and print it
		get_specifier(&data, *fmt);
		}
		else // write in STDOUT_FILENO the char
			data.n_chars += write(1, fmt, 1);
		++fmt;
	}
	va_end(data.ap);
	return (data.n_chars);
}
