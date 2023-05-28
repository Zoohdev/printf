#include "main.h"
#include <stdio.h>
/***
 * print_char - prit character
 * @list: list of arguments
 * Return: amount of characters
*/
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}
