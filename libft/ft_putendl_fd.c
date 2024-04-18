#include "libft.h"

void    ft_putendl_fd(char *s, int fd)
{
    int n;

    n = ft_strlen(s);
    write(fd, s, n);
    write(fd, "\n", 1); 
}
