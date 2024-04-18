/*
Function name ft_strtrim
Prototype char *ft_strtrim(char const *s1, char const *set);
Turn in files -
Parameters s1: The string to be trimmed.
set: The reference set of characters to trim.
Return value The trimmed string.
NULL if the allocation fails.
External functs. malloc
Description Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string. */

#include "libft.h"

static int ft_char_in_str(const char *str, const char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char *ft_strtrim(const char  *s1, const char *set)
{
	char *nstr;
	size_t	start;
	size_t	end;

	if(!*s1)
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_char_in_str(set, s1[start]))
		start++;
	while (ft_char_in_str(set, s1[end]))
		end--;
	nstr = ft_substr(s1, start, end - start + 1);

	return (nstr);
}

/* #include <stdio.h>

int main()
{
	char * str = "xxxxxxxxxxola mundo!xxxxxxxx";
	char *nstr = ft_strtrim(str, "xyz");
	printf("%s\n", nstr);
	free(nstr);
	return 0;
} */