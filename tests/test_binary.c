#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: is always 0
*/
int main(void)
{
	int p;
	p = _printf("%b\n", 0);
	printf("%d\n", p);
	return (0);
}
