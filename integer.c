#include "main.h"
#include <stdio.h>
/**
 * print_integer - print an integer
 * @list : list of arguments
 * Return: amount of char printed
*/
int print_integer(va_list list)
{
	int number_len;

	number_len = print_number(list);
	return (number_len);
}
