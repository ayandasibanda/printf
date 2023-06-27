#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character that will be written
 *
 * Return: 0 success, 1. If there is an error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printf - Custom implementation of the printf function.
 * @format: A string containing 0 or more format specifiers.
 *
 * Return: The number of characters printed (excluding null byte
 *         used to end output to strings), -1 if error.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char c;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				count += _putchar('%');
			}
			else if (*format == 'd' || *format == 'i')
			{
				int num = va_arg(args, int);

				count += print_number(num);

			}
			else
			{
				count += _putchar('%');
				count += _putchar(*format);
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}

	va_end(args);

	return (count);
}

/**
 * print_number - Prints an integer to the standard output
 * @number: The number that will be printed.
 *
 * Return: The number of characters that will be printed.
 */
int print_number(int number)
{
	unsigned int abs_number;
	int count = 0;

	if (number < 0)
	{
		count += _putchar('-');
		abs_number = -number;
	}
	else
	{
		abs_number = number;
	}

	if (abs_number / 10)
		count += print_number(abs_number / 10);

	count += _putchar('0' + (abs_num % 10));

	return (count);
}

