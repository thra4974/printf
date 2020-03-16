#include "printf.h"

/**
 * _printf - produces output according to format
 * @format: pointer to constant char
 * Return: integer
 */

int _printf(const char *format, ...)
{

	char *ptrstr;
	char ch;
	va_list list;

	va_start(list, format);

	while(*format)
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
				break;
			case 's':
				ptrstr = va_arg(list, char *);
				_putstring(ptrstr);
				format++;
				break;
			case '%':
				_putchar('%');
				format++;

				break;
			case '\0':
				break;
//			default: //Need do figure out default.
			}

		}

		else
		{
			_putchar(*format);
			format++;
		}

	}

	va_end(list);

	return (0);
}
