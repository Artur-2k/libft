#include "ft_printf.h"

// this function will init all the data but the format
static int	init_data(t_data *data, const char *fmt)
{
	data->buff = malloc(sizeof(char) * BUFF_SIZE);
	if (!data->buff)
		return MALLOC_ERROR;
	data->s = fmt;
	data->chars_written = 0;
	data->buff_index = 0;
	ft_memset(data->buff, 0, BUFF_SIZE);
	return OK;
}

//here were looking to transform the specifiers and flags into the desired outcome
void render_format(t_data *data)
{
	char	specifier;

	specifier = data->format.specifier;
	if (specifier == '%')
		spec_char(data, '%');
	if (specifier == 'c')
		spec_char(data, va_arg(data->ap, int)); // here we fetch an int because of type promotion
	if (specifier == 's')
		spec_str(data, va_arg(data->ap, char *));

	//todo diupxX
	//TODO BINARIO PARA APRENDER
}

 //! ------------------------------------------- !\\
 //					TODO						  \\
 //				 and int types					  \\
 //! ------------------------------------------- !\\

int	ft_printf(const char *fmt, ...)
{
	//*            v
	//* ("eu sou o %s o tolo", Artur)
	t_data	data;

	//* iniciallize data
	va_start(data.ap, fmt);
	if (init_data(&data, fmt)) // if innit data fails it returns a negative number
		return MALLOC_ERROR;
	//!usamos o ponto porque aqui estamos mesmo a usar a data
	while(*data.s)
	{
		//* vemos se encontramos um %
				//! Short circuiting to get next char if true
		if (*data.s == '%' && *(++data.s))
		{
			if (parse_format(&data))
				return PARSE_ERROR;
			render_format(&data);
		}
		else
		{
			//* here i want to stock the char in the buffer
			write_buff(&data, *data.s);
		}
		//*next character
		data.s++;
	}
	//write the buffer
	flush_buff(&data);
	//cleaning everything
	free(data.buff);
	va_end(data.ap);
	//return 	number of chars written
	return data.chars_written;
}
