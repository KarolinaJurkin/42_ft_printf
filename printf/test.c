#include "libftprintf.h"
#include <stdio.h>

int	main(void)
{
	int x = -0;
	int y = -153200;
	//unsigned int u = (unsigned int) x;
	int	a, b;
	char	*p, *s;
	p = NULL;
	s = "1234567890";

	printf("decimal x:\n");
	a = ft_printf("%d\n", x);
	b = printf("%d\n", x);
	printf("a = %d\nb = %d\n\n", a, b);

	printf("decimal y:\n");
	a = ft_printf("%d\n", y);
	b = printf("%d\n", y);
	printf("a = %d\nb = %d\n\n", a, b);

	printf("unsigned x:\n");
	a = ft_printf("%u\n", x);
	b = printf("%u\n", x);
	printf("a = %u\nb = %d\n\n", a, b);

	printf("unsigned y:\n");
	a = ft_printf("%u\n", y);
	b = printf("%u\n", y);
	printf("a = %u\nb = %d\n\n", a, b);

	printf("hexadecimal x:\n");
	a = ft_printf("%x\n", x);
	b = printf("%x\n", x);
	printf("a = %d\nb = %d\n\n", a, b);

	printf("hexadecimal y:\n");
	a = ft_printf("%x\n", y);
	b = printf("%x\n", y);
	printf("a = %d\nb = %d\n\n", a, b);

	a = ft_printf("string%s\n", s);
	b = printf("string%s\n", s);
	printf("a = %d\nb = %d\n\n", a, b);

	printf("Null pointer 's':\n");
	a = ft_printf("%s\n", p);
	b = printf("%s\n", p);
	printf("a = %d\nb = %d\n\n", a, b);

	printf("Null pointer 'p':\n");
	a = ft_printf("%p\n", p);
	b = printf("%p\n", p);
	printf("a = %d\nb = %d\n\n", a, b);
	return (0);
}
