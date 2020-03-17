#ifndef _PRINT_F_H
#define _PRINT_F_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
void _putstring(char *s);
int _strlen(char *s);
char *int_to_str(long int num, int base);
int _printf(const char *format, ...);
int _strcmp(const char *s1, char *s2);

/**
 * typedef print_type{
 *	char *c;
 *	void (*f)(va_list list);
 *} ptype;
*/

#endif
