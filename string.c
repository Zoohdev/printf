#include "main.h"
#include <stdio.h>
/**
 * print_string - prints a string
 * @list : list of arguments
 * Return: the amount of char printed
*/
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "null";
	for (i = 0, str[i] != '\0', i++)
		_putchar(str[i]);
	return (i);
}
