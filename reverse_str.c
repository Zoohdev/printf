#include "main.h"
/**
 * print_reversed - print string in reverse
 * @arg : argument for the function
 * Return: amount of characters printed
*/
int print_rev_string(va_list arg)
{
	char *str;
	char *ptr;
	int len;

	str = var_arg(arg, char *);
	if (str == NULL)
		return (-1);
	prt = rev_str(str);
	if (prt == NULL)
		return(-1);
	for (len = 0; prt[len] != '\0'; len++)
		_putchar(ptr[len]);
	free(ptr);
	return(len);
}
