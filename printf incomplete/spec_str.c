#include "ft_printf.h"

//! FLAGS FOR STRINGS
//*		- width .precision
// .precision truncates if < slen and doesnt do anything if > slen
// .precision == 0 empty string with width spaces
// width puts spaces if > slen and if < slen doesnt do anything
// - left justifies the string based on width

//! this function will get the number of spaces for width
static void str_spaces(t_data *data, const char *s)
{
	int slen;

	slen = ft_strlen(s);
	if (data->format.width_value > 0) // check for width
	{
		// check for precision
		if (data->format.precision_value >= 0)
		{
			if (data->format.precision_value >= slen) // doesnt affect s
				data->format.n_spaces = data->format.width_value - slen;
			else // truncates s
			{
				// %10.3s "hello" [-------hel]
				data->format.n_spaces = data->format.width_value - data->format.precision_value;
			}
		}
	}
}
void spec_str(t_data *data, const char *s)
{
	if (s == NULL) // checking for null
		s = "(null)";
	str_spaces(data, s); //! this gets how many spaces we will write
	//! then we will write with justification
	if (data->format.left_justifed)
	{
		// l.j and with precision truncation or not
		if (data->format.precision_value >= 0)
			put_str_buff(data, s, data->format.precision_value);
		// l.j. without precision just the str
		else
			put_str_buff(data, s, ft_strlen(s));
		// place the spaces
		put_char_buff(data, ' ', data->format.n_spaces);
	}
	else // not left justified (inverse order same logic as before)
	{
		put_char_buff(data, ' ', data->format.n_spaces);
		// l.j and with precision truncation or not
		if (data->format.precision_value >= 0)
			put_str_buff(data, s, data->format.precision_value);
		// l.j. without precision just the str
		else
			put_str_buff(data, s, ft_strlen(s));
	}
}