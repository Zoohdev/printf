#include "main.h"
#include <stdio.h>
/**
 * print_binary - converts number from base 10  to binary
 * @list : list of argument
 * Return : length of the number 
*/
int print_binary(va_list list)
{
	char *str;
	char *rev_str;
	unsigned int number;
	int i, len;

	number = va_arg(list, unsigned int);
	if (number == 0)
		return (_putchar('0'));
	if (number < 1)
		return (-1);
	len = base_len(number, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);
	for (i = 0; number > 0; i++)
	{
		if (number % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		number = number / 2;
	}
	str[i] = '\0';
	rev_str = rev_string(str);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(str);
	free(rev_str);
	return (len);
}
/**
 * write_base - chars to be written on stdout
 * @str : string
*/
void write_base(char *str)
{
	int i;

	for (i = 0; str[i] != '0\'; i++)
		_putchar(str[i]);.
}
