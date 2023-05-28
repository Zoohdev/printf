#include "main.h"
#include  <stdio.h>
/**
 * main - entry point
 *
 * Return: its always 0
*/
int main(void)
{
	int c;
	int num;

	num = 19912507;
	c = _printf("%i, %d\n", num, num);
	printf("%d\n", c);
	c = _print("% ");
	printf("%d\n", c);
	return (0);
}
