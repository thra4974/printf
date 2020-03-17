#include "holberton.h"

/**
 * _printf - produces output according to format
 * @format: pointer to constant char
 * Return: integer
 */

int _printf(const char *format, ...)
{

	int it = 0;
	char *ptrstr;
	char ch;
	va_list list;
	long int num;

	va_start(list, format);

	if (format == NULL || (_strcmp(format, "%") == 0))
		return (-1);
	while (*format)

	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
			case 'c':
				ch = va_arg(list, int);
				_putchar(ch);
				format++;
				it++;
				break;
			case 's':
				ptrstr = va_arg(list, char *);
				_putstring(ptrstr);
				format++;
				it += _strlen(ptrstr);
				break;
			case 'd':
			case 'i':
				num = va_arg(list, int);
				_putstring(int_to_str(num, 10));
				format++;
				it += _strlen(int_to_str(num, 10));
				break;
			case '%':
				_putchar('%');
				format++;
				it++;
				break;
			case '\0':
				break;
			}

		}
/*
 *		else if (*format == '\\')
 *		{
 *			format++;
 *			_escape(*format);
 *		}
*/
		else
		{
			_putchar(*format);
			format++;
			it++;
		}

	}

	va_end(list);

	return (it);
}
