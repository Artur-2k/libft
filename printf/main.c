#include "ft_printf.h"
#include <stdio.h>
/*
int	main(void)
{
	int				a;
	int				b;
	unsigned int	c;
	long long int	d;
	char			e;
	char			*f;

	a = 123;
	b = -456;
	c = 10;
	d = 123456789;
	e = 'A';
	f = "Hello, world!";
	int ret1, ret2;
	ft_printf("Teste 1: %%d\n");
	ret1 = ft_printf("   ft_printf: %d\n", a);
	ret2 = ft_ft_printf("ft_ft_printf: %d\n", a);
	ft_printf("   Return (ft_printf): %d\n", ret1);
	ft_printf("   Return (ft_ft_printf): %d\n", ret2);
	//!------------------------------
	ft_printf("\nTeste 2: %%i\n");
	ret1 = ft_printf("   ft_printf: %i\n", b);
	ret2 = ft_ft_printf("ft_ft_printf: %i\n", b);
	ft_printf("   Return (ft_printf): %d\n", ret1);
	ft_printf("   Return (ft_ft_printf): %d\n", ret2);
	//!------------------------------
	//!------------------------------
	ft_printf("\nTeste 3: %%u\n");
	ret1 = ft_printf("   ft_printf: %u\n", c);
	ret2 = ft_ft_printf("ft_ft_printf: %u\n", c);
	ft_printf("   Return (ft_printf): %d\n", ret1);
	ft_printf("   Return (ft_ft_printf): %d\n", ret2);
	//!------------------------------
	//!------------------------------
	ft_printf("\nTeste 4: %%x\n");
	ret1 = ft_printf("   ft_printf: %x\n", c);
	ret2 = ft_ft_printf("ft_ft_printf: %x\n", c);
	ft_printf("   Return (ft_printf): %d\n", ret1);
	ft_printf("   Return (ft_ft_printf): %d\n", ret2);
	//!------------------------------
	//!------------------------------
	ft_printf("\nTeste 5: %%X\n");
	ret1 = ft_printf("   ft_printf: %X\n", c);
	ret2 = ft_ft_printf("ft_ft_printf: %X\n", c);
	ft_printf("   Return (ft_printf): %d\n", ret1);
	ft_printf("   Return (ft_ft_printf): %d\n", ret2);
	//!------------------------------
	
	ft_printf("\nTeste 6: %%p\n");
	ret1 = ft_printf("ft_printf: %p\n", &a);
	ret2 = ft_ft_printf("ft_printf: %p\n", &a);
	ft_printf("   Return (ft_printf): %d\n", ret1);
	ft_printf("   Return (ft_ft_printf): %d\n", ret2);
	
	ft_printf("\nTeste 8: %%s\n");
	ret1 = ft_printf("   ft_printf: %s\n", f);
	ret2 = ft_ft_printf("ft_ft_printf: %s\n", f);
	ft_printf("   Return (ft_printf): %d\n", ret1);
	ft_printf("   Return (ft_ft_printf): %d\n", ret2);
	ft_printf("\nTeste 7: %%c\n");
	ret1 = ft_printf("   ft_printf: %c\n", e);
	ret2 = ft_ft_printf("ft_ft_printf: %c\n", e);
	ft_printf("   Return (ft_printf): %d\n", ret1);
	ft_printf("   Return (ft_ft_printf): %d\n", ret2);
	ft_printf("\nTeste 9: %%%%\n");
	ret1 = ft_printf("   ft_printf: %%\n");
	ret2 = ft_ft_printf("ft_ft_printf: %%\n");		ft_printf("   Return (ft_printf): %d\n", ret1);
	ft_printf("   Return (ft_ft_printf): %d\n", ret2);
	
	return (0);
}
*/
#include "ft_printf.h"
//Success caralho

int main() {



	// Teste de Edge Checkar estes casos ABAIXO
	//
	//
    // Teste de Edge Case para Endereço (NULL pointer)
    //int *ptr = NULL;
    //ft_printf("%p\n", (void*)ptr); // Saída esperada: Endereço nulo

    // Teste com String Vazia
    //ft_printf("%s\n", ""); // Saída esperada: (String vazia)
	//printf("%s\n", "");
    // Teste de Inteiro (d, i)
    //ft_printf("%d\n", 42); // Saída esperada: 42

   
    // Teste de Edge Case para Inteiro sem Sinal (maior valor de unsigned int)
    //ft_printf("%u\n", 4294967295); // Saída esperada: Valor máximo de um inteiro sem sinal
   
   
   
    // Teste de Inteiro sem Sinal (u)
    //ft_printf("%u\n", 42); // Saída esperada: 42

    // Teste de Hexadecimal Minúsculo (x)
    //ft_printf("%x\n", 255); // Saída esperada: ff

    // Teste de Hexadecimal Maiúsculo (X)
    //ft_printf("%X\n", 255); // Saída esperada: FF

    // Teste de Endereço (p)
    int x = 42;
    ft_printf("meu -----%p\n", (void*)&x); // Saída esperada: Endereço de memória de x
	printf("original -----%p\n", (void*)&x);
    // Teste de Caractere (c)
    //ft_printf("%c\n", 'A'); // Saída esperada: A

    // Teste de String (s)
   // ft_printf("%s\n", "Hello"); // Saída esperada: Hello

    // Teste de Percentagem (%)
    //ft_printf("%%\n"); // Saída esperada: %

    // Teste com Múltiplos Specifiers
    //ft_printf("%d %u %x %X %p %c %s %%\n", 42, 42, 255, 255, (void*)&x, 'A', "Hello");
    // Saída esperada: 42 42 ff FF [endereço de memória de x] A Hello %

    // Teste com Múltiplas Variáveis do Mesmo Tipo em uma String
    int a = 10, b = 20, c = 30;
    //ft_printf("%d %d %d\n", a, b, c); // Saída esperada: 10 20 30

    // Teste com Múltiplas Variáveis de Tipos Diferentes em uma String
    int f = 3;
    char ch = '!';
    //ft_printf("%d %d %c\n", a, f, ch); // Saída esperada: 10 3 !

    // Teste de Edge Case para Inteiro (maior valor de int)
    //ft_printf("%d\n", INT_MAX); // Saída esperada: Valor máximo de um inteiro


    return 0;
}
