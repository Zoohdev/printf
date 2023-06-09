#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* utils.c */
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/* printf.c */
int _printf(const char *, ...);

/* handler.c */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

/* printers */
int print_string(va_list);
int print_char(va_list);
int print_integer(va_list);
       /*binary.c*/
int print_binary(va_list);
void write_base(char *str);
int print_rot(va_list);
int print_unsigned(va_list);
       /*unsigned_octal.c*/
int print_octal(va_list list);
int print_hexadecimal_low(va_list);
int print_hexadecimal_upp(va_list);
int print_pointer(va_list);
int print_rev_string(va_list arg);

/* _putchar.c */
int _putchar(char);
int buffer(char);

/**
 * struct _format - Typedef struct
 *
 * @type: This is the format
 * @f: The function
 **/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;


#endif 
