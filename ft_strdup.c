#include "ft_libft.h"

char *strdup(const char *str)
{
    char *pstr;
    syze_t i;

    pstr = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
    if (!pstr)
        return (NULL);
    i = 0;
    while (str[i])
    {
        pstr[i] = str[i]
        i++;
    }
    i = 0;  
    return(pstr);
}