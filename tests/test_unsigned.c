#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Return : always 0
*/
int main(void)
{
	unsigned int x;
	int c;

	x = -8;
	c = _printf("%u\n", x);
	_printf(">%i\n", c);
	c = printf("%u\n", x);
	printf(">%i\n", c);
	return (0);
}
