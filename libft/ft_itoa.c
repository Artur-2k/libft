#include "libft.h"

static int ft_ndigits(int n)
{
	int count;

	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		count ++;
	}
	return (count);
}

char *ft_itoa(int n)
{
	char *str;
	int nchars;

	nchars = ft_ndigits(n);
	if (n < 0)
		nchars++;
	str = (char *)malloc(sizeof(char) * (1 + nchars));
	if (!str)
		return (NULL);
	str[nchars] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n)
	{
		str[--nchars] = n % 10 + 48;
		n /= 10;
	}
	return (str);
}
/*
#include <stdio.h>
int main()
{
	char *str = ft_itoa(123);
	if (str == NULL)
		printf("n deu\n");
	else
		printf("%s\n", str);
	free(str);
	return 0;
} */