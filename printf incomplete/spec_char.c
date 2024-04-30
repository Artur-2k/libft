#include "ft_printf.h"

//! when the specifier is c we are writting the char in the buffer
//! here we take an int c because of type promotion on variadic functions
void spec_char(t_data *data, int c)
{
	int width;

	width = data->format.width_value;
	if (width > 1) // if width is major than 1 we have to see if its l.j. and write in that order
	{
		if (data->format.left_justifed)
		{
			put_char_buff(data, (char)c, 1);
			put_char_buff(data, ' ', width - 1); //* width - 1 cuz its a char
		}
		else
		{
			put_char_buff(data, ' ', width - 1);
			put_char_buff(data, (char)c, 1);
		}
	}
	else
		put_char_buff(data, (char)c, 1);

}