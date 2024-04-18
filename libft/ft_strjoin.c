/*ufnction name ft_strjoin
Prototype char *ft_strjoin(char const *s1, char const *s2);
Turn in files -
Parameters s1: The prefix string.
s2: The suffix string.
Return value The new string.
NULL if the allocation fails.
External functs. malloc
Description Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.*/

#include "libft.h"

static char *ft_strcpy(char *dest, const char *src)
{
	size_t i;

	i = 0;
	while (*src)
	{
		dest[i] = *src;
		src++;
		i++;
	}
	dest[i] = 0;
	return (dest);
}

static char *ft_strcat( char *dest, const char *src)
{
	size_t i;

	i = ft_strlen(dest);
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = 0;
	return (dest);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char *nstr;

	nstr = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!nstr)
		return (NULL);
	ft_strcpy(nstr, s1);
	ft_strcat(nstr, s2);
	return (nstr);
}
/*
#include <stdio.h>

int main()
{
	const char *s1 = "ola ";
	const char *s2 = "mundo!";
	char *result = ft_strjoin(s1, s2);
	printf("%s\n", result);
	free(result);
	return 0;
} */