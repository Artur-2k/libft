#include "ft_printf.h"

void	test_char()
{
	printf("\tmine_CHARS=%d\n",
			ft_printf("This is a char [[%c]]\n", 'A'));
	printf("\treal_CHARS=%d\n\n",
			printf("This is a char [[%c]]\n", 'A'));

	printf("\tmine_CHARS=%d\n",
			ft_printf("This is a char [%10c]\n", 'A'));
	printf("\treal_CHARS=%d\n\n",
			printf("This is a char [%10c]\n", 'A'));

	printf("\tmine_CHARS=%d\n",
			ft_printf("This is a char [%-10c]\n", 'A'));
	printf("\treal_CHARS=%d\n\n",
			printf("This is a char [%-10c]\n", 'A'));

	int	n = 10;
	printf("\tmine_CHARS=%d\n",
			ft_printf("This is a char [%-*c]\n", n, 'A'));
	printf("\treal_CHARS=%d\n\n",
			printf("This is a char [%-*c]\n", n, 'A'));

}

void	test_str()
{
	char	*s = "Special Beam Cannon";
	printf("\tmine_CHARS=%d\n",
			ft_printf("This is a str ""[%s]\n", s));
	printf("\treal_CHARS=%d\n\n",
			printf("This is a str ""[%s]\n", s));

	printf("\tmine_CHARS=%d\n",
			ft_printf("This is a str ""[%10s]\n", s));
	printf("\treal_CHARS=%d\n\n",
			printf("This is a str ""[%10s]\n", s));

	printf("\tmine_CHARS=%d\n",
			ft_printf("This is a str ""[%10.3s]\n", s));
	printf("\treal_CHARS=%d\n\n",
			printf("This is a str ""[%10.3s]\n", s));

	printf("\tmine_CHARS=%d\n",
			ft_printf("This is a str ""[%-10.3s]\n", s));
	printf("\treal_CHARS=%d\n\n",
			printf("This is a str ""[%-10.3s]\n", s));

	printf("\tmine_CHARS=%d\n",
			ft_printf("This is a str ""[%*.*s]\n", 3, 6, s));
	printf("\treal_CHARS=%d\n\n",
			printf("This is a str ""[%*.*s]\n", 3, 6,  s));
}

int main()
{
	//test_char(); passed internal tests
	//test_str(); passed internal tests
	return 0;
}