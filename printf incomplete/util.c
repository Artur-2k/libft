#include "ft_printf.h"

int ft_atoi(t_data *data)
{

        int     result;
        int     sign;

        result = 0;
        sign = 1;
        if (*data->s == '+' || *data->s == '-')
        {
                if (*data->s == '-')
                        sign = -1;
                data->s++;
        }
        while (*data->s && '0' <= *data->s && *data->s <= '9')
        {
                result = result * 10 + *data->s - 48;
                data->s++;
        }
        return (result * sign);
}

void    ft_memset(void *p, int c, size_t n)
{
		unsigned char *ptr;

		ptr = (unsigned char*)p;
        while (n > 0)
        {
                *ptr = c;
                ptr++;
                n--;
        }
}

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

int ft_strlen(const char *s)
{
	int	i;

	if (!s || !*s)
		return 0;
	i = 0;
	while (s[i])
		i++;
	return i;
}