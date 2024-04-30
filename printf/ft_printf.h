#ifndef	FT_PRINTF_H
# define FT_PRINTF_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdbool.h>

#define SPECIFIERS	"duipxXcs%"
#define LOW_HEXA	"0123456789abcdef"
#define UP_HEXA		"0123456789ABCDEF"
#define DECIMAL		"0123456789"

typedef enum
{
	BASE_10 = 10,
	BASE_16 = 16,
} e_bases;

typedef union
{
	long			nlong;
	unsigned long	ulong;
}	u_longs;

typedef struct
{
	va_list		ap;
	char		specifier;
	int			n_chars;
} t_data;

//! PROTOTYPES !//
int		ft_strchr(const char *s, int c);
void	ft_putnum_base(long long num, int lbase, char *base_symbols, t_data *data);
void	ft_putstr(char *s, t_data *data);
void	ft_putchar(char c, t_data *data);
int	ft_printf(const char *fmt, ...);
#endif