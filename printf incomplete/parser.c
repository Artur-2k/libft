#include "ft_printf.h"

static void parse_flags(t_data *data)
{
	//! iterando pela string
	while (ft_strchr(FLAGS, *data->s))
	{	//[+-0 #] procuramos uma flag e ligamos se encontrarmos
		switch (*data->s)
		{
			case '0':
				data->format.zero_pad = true;
				break;
			case ' ':
				data->format.space = true;
				break;
			case '-':
				data->format.left_justifed = true;
				break;
			case '+':
				data->format.plus = true;
				break;
			case '#':
				data->format.hash = true;
				break;
		}
		data->s++;
	}
}

static void get_value(t_data *data, int *value)
{	//! * é um substituto de um numero que vamos buscar a va_arg
	//! "%*d" , 10 ,5  -> width = 10
	if (*data->s == '*')
	{
		*value = va_arg(data->ap, int);
		data->s++;
	}
	else
		*value = ft_atoi(data);
}
int parse_format(t_data *data)
{
	//! we need to refresh the data format(flags)
	//* everytime it gets called if we have multiple %
	ft_memset(&data->format, 0, sizeof(t_format)); //! passando um endereço para o pointer do memset do format
	//! I can only accept precision >= 0 but not width (>0)
	data->format.precision_value = -1;
	//* vamos ver quais flags temos ligadas
	parse_flags(data); // aqui passamos data porque já é um pointer
	//* parse width of data;
	get_value(data, &data->format.width_value);
	//* parse precision of data;
	if (*data->s == '.' && *(++data->s))
		get_value(data, &data->format.precision_value);
	//* now the specifier. some more data we can retrieve
	if (ft_strchr(SPECIFIERS, *data->s))
	{
		data->format.specifier = *data->s;
		if (ft_strchr("udi", data->format.specifier))
			data->format.base = BASE_10;
		else if(ft_strchr("pxX", data->format.specifier))
		{
			data->format.base = BASE_16;
			if (*data->s == 'X')
				data->format.upper_base = true;
		}
	}
	else // couldt not read the specifier
		return PARSE_ERROR;
	// valid specifier
	return OK;
}
