#include "ft_printf.h"

//* when the string has ended or we need to empty our buffer to write more chars we use flush
//! everytime a char is written in the stdout we need to count it
void flush_buff(t_data *data)
{
	data->chars_written += write(STDOUT_FILENO, data->buff, data->buff_index);
	data->buff_index = 0; //! this refreshes our index for more than BUFF_SIZE chars to be written
	ft_memset(data->buff, 0 ,BUFF_SIZE); //! this clears the memory of the buffer again to 0's
}
//* we check if our buffer is full to see if we need to empty it and keep stocking chars
//* or simply stock the char and move our index one position
void write_buff(t_data *data, char c)
{
	if (data->buff_index == BUFF_SIZE)
		flush_buff(data);
	data->buff[data->buff_index] = c;
	data->buff_index++;
}

void put_char_buff(t_data *data, int c, int n)
{
	if (n <= 0)
		return ;
	while (n--)
		write_buff(data, c);
}

void put_str_buff(t_data *data,const char *str, int n)
{
	if (n == 0)
		return ;
	while (n-- && *str)
	{	write_buff(data, *str);
		str++;
	}
}