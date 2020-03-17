#include "holberton.h"

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

	if (s == NULL)
		_putchar('\0');
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
	static char buffer[1024];
	char sign = 0;
	char *ptr;
	unsigned long n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}

	ptr = &buffer[1023];
	*ptr = '\0';

	do {
		*--ptr = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--ptr = sign;
	return (ptr);
}
#include "holberton.h"
/**
 * _strcmp - compare string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: difference in s1 and s2
 */
int _strcmp(const char *s1, char *s2)
{
	int i = 0;
	
	while (s1[i] - s2[i] == 0)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			break;
		else
			i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else
		return (s1[i] - s2[i]);
}
