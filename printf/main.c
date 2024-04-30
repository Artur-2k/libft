#include <stdio.h>
#include "ft_printf.h"

int main() {
    int a = 123;
    int b = -456;
    unsigned int c = 10;
    long long int d = 123456789;
    char e = 'A';
    char *f = "Hello, world!";
    int ret1, ret2;


    /*printf("Teste 1: %%d\n");
    ret1 = printf("   printf: %d\n", a);
    ret2 = ft_printf("ft_printf: %d\n", a);
    printf("   Return (printf): %d\n", ret1);
    printf("   Return (ft_printf): %d\n", ret2);


	//!------------------------------
    printf("\nTeste 2: %%i\n");
    ret1 = printf("   printf: %i\n", b);
    ret2 = ft_printf("ft_printf: %i\n", b);
    printf("   Return (printf): %d\n", ret1);
    printf("   Return (ft_printf): %d\n", ret2);
	//!------------------------------


	//!------------------------------
    printf("\nTeste 3: %%u\n");
    ret1 = printf("   printf: %u\n", c);
    ret2 = ft_printf("ft_printf: %u\n", c);
    printf("   Return (printf): %d\n", ret1);
    printf("   Return (ft_printf): %d\n", ret2);
	//!------------------------------

	//!------------------------------
    printf("\nTeste 4: %%x\n");
    ret1 = printf("   printf: %x\n", c);
    ret2 = ft_printf("ft_printf: %x\n", c);
    printf("   Return (printf): %d\n", ret1);
    printf("   Return (ft_printf): %d\n", ret2);
	//!------------------------------

	//!------------------------------
    printf("\nTeste 5: %%X\n");
    ret1 = printf("   printf: %X\n", c);
    ret2 = ft_printf("ft_printf: %X\n", c);
    printf("   Return (printf): %d\n", ret1);
    printf("   Return (ft_printf): %d\n", ret2);
	//!------------------------------

	*/
    printf("\nTeste 6: %%p\n");
    ret1 = printf("printf: %p\n", &a);
    ret2 = ft_printf("printf: %p\n", &a);
    printf("   Return (printf): %d\n", ret1);
    printf("   Return (ft_printf): %d\n", ret2);

/*
    printf("\nTeste 8: %%s\n");
    ret1 = printf("   printf: %s\n", f);
    ret2 = ft_printf("ft_printf: %s\n", f);
    printf("   Return (printf): %d\n", ret1);
    printf("   Return (ft_printf): %d\n", ret2);

    printf("\nTeste 7: %%c\n");
    ret1 = printf("   printf: %c\n", e);
    ret2 = ft_printf("ft_printf: %c\n", e);
    printf("   Return (printf): %d\n", ret1);
    printf("   Return (ft_printf): %d\n", ret2);
    printf("\nTeste 9: %%%%\n");
    ret1 = printf("   printf: %%\n");
    ret2 = ft_printf("ft_printf: %%\n");
    printf("   Return (printf): %d\n", ret1);
    printf("   Return (ft_printf): %d\n", ret2);
*/
    return 0;
}
