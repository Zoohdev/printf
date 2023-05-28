#include "main.h"
#include <stdio.h>
/**
 * main - entry point
 *
 * Return : its always 0
*/
int main(void)
{
	char h;
	char *b;

	h = 'H';
	b = "hello";
	h = _printf("%c, %s\n", h, b);
	return (0);
}
