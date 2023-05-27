#include "main.h"
#include <stdio.h>
int main(void)
{
	int s;
	int x;

	s = 145;
	x = _printf("%o\n", s);
	printf("> %i\n", x);
	printf("%o\n", s);
	return (0);
}
