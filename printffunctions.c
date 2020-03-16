#include "printf.h"

/**
 * _putchar - writes character to stdout
 * @c: character to be written.
 * Return: integer
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strlen - function calculates string length.
 * @s: pointer to string s.
 * Return: length as integer.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _putstring - prints a string.
 * @s: pointer to string.
 * Return: nothing.
 */

void _putstring(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		_putchar(*(s + i));
		i++;
	}
}

/**
 * int_to_str - converts integer to string.
 * @num: number
 * @base: base
 * Return: character array string
 */

char *int_to_str(long int num, int base)
{
	static char *array = "0123456789abcdef";
	static char buffer[50];
	char sign = 0;
	char *ptr;
	unsigned long n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}
