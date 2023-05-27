#include "main.h"
#include <stdio.h>
/**
 * print_octal - it prints a number in octal base
 *                in numeric representation
 * @list : all programs executed by program
 * Return : The number of symbols to std output
*/
int print_octal(va_list list)
{
	unsigned int number;
	int len;
	char *rev_str;
	char *octal_rep;

	number = va_arg(list, unsigned int);
	if (number == 0)
		return (_putchar('0'));
	if (number < 1)
		return (-1);
	len = base_len(num, 8);
	octal_rep = malloc(sizeof(char) * len + 1);
	if (octal_rep == NULL)
		return (-1);
	for (len = 0; number > 0; len++)
	{
		octal_rep[len] = (num % 8) + 48;
		number = number / 8;
	}
	octal_rep[len] = '\0';
	rev_str = rev_string(octal_rep);
	if (rev_str == NULL)
		return (-1);
	write_base(rev_str);
	free(rev_str);
	free(octal_rep);
	return (len);
}
