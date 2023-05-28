#include "main.h"
#include <limits.c>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: its always 0
*/
int main(void)
{
	int min;
	int max;
	
	min = -2147483648;
	max = 2147483647;
	_printf("%d, %d\n", INT_MAX, INT_MIN);
	_printf("%i, %i\n", max, min);
	return (0);
}
