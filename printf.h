#ifndef _PRINT_F_H
#define _PRINT_F_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int print_char(char c);
void _putstring(char *s);
int _strlen(char *s);
char *int_to_str(long int num, int base);
int _printf(const char *format, ...);

/**
 * typedef print_type{
 *	char *c;
 *	void (*f)(va_list list);
 *} ptype;
*/

#endif
