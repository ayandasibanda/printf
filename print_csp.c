#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_char - Prints a character
 * @c: The character to print
 *
 * Return: The number of characters printed
 */
int print_char(char c)
{
	_putchar(c);
	return (1);
}

/**
 * print_string - Prints a string
 * @s: The string to print
 *
 * Return: The number of characters printed
 */
int print_string(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		putchar(*s);
		s++;
		count++;
	}

	return (count);
}

/**
 * _printf - Prints formatted output according to a format
 * @format: A character string composed of zero or more directives
 *
 * Return: The number of characters printed excluding the null byte
 */
int _printf(const char *format, ...)
{
	int count = 0; /* Counts the number of characters printed */

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
				case 'c':
					count += print_char(va_arg(args, int));
					break;
				case 's':
					count += print_string(va_arg(args, char *));
					break;
				case '%':
					putchar('%');
					count++;
					break;
				default:
					break;
			}
		}
		else
		{
			count += print_char(*format);
		}

		format++;
	}

	va_end(args);

	return (count);
}
