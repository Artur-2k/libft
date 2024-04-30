#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <stdio.h> //TODO REMOVE

#define BUFF_SIZE	4096
#define FLAGS		"+- 0#"
#define SPECIFIERS	"csdiuxX%"

//Symbolic errors
typedef enum
{
	OK = 0,
	MALLOC_ERROR = -1337,
	PARSE_ERROR = -42,
} e_errors;

// Bases
typedef enum
{
	BASE_10 = 10,
	BASE_16 = 16,
} e_base;

typedef struct s_format
{
	//* flags [+-' '0#]
	bool		left_justifed;
	bool		zero_pad;
	bool		hash;
	bool		plus;
	bool		space;
	//*specifier "csdixXpu..."
	char		specifier;
	//*width and .precision
	int			width_value;
	int			n_spaces;
	int			precision_value;
	int			base;
	bool		upper_base;

}	t_format;

typedef struct s_data
{
	//*pointer cpy of the string
	const char *s;
	//*va_list for ap
	va_list		ap;
	//*number of chars (write and printf return the n of chars)
	int			chars_written;
	//*a big buffer to store the string and then print it once ready
	char		*buff;
	int			buff_index;
	//*all the flags
	t_format 	format;

} t_data;

//!		PROTOTYPES      !//
int		ft_atoi(t_data *data);
void    ft_memset(void *p, int c, size_t n);
int    	ft_strchr(const char *s, int c);
int		ft_strlen(const char *s);

int 	parse_format(t_data *data);

void 	render_format(t_data *data);

void 	spec_char(t_data *data, int c);
void	spec_str(t_data *data, const char *s);

void 	write_buff(t_data *data, char c);
void 	put_char_buff(t_data *data, int c, int spaces);
void	put_str_buff(t_data *data, const char *str, int precision);
void 	flush_buff(t_data *data);

int		ft_printf(const char *fmt, ...);

#endif