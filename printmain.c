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

	va_start(list, format);

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
