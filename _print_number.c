#include "main.h"
#include <stdio.h>

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character that will be written
 *
 * Return: 0 success, 1. If there is an error, -1 is returned.
 */
int _putchar(char c)
{
        return putchar(c);
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
                        else if (*format == 'c')
                        {
                                count += print_char(va_arg(args, int));
                        }
                        else if (*format == 's')
                        {
                                count += print_string(va_arg(args, char *));
                        }
                        else if (*format == 'p')
                        {
                                count += print_pointer(va_arg(args, void *));
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

        return count;
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

        count += _putchar('0' + (abs_number % 10));

        return count;
}

/**
 * print_pointer - Prints a pointer address to the standard output
 * @ptr: The pointer address to be printed
 *
 * Return: The number of characters that will be printed.
 */
int print_pointer(void *ptr)
{
        unsigned long int address = (unsigned long int)ptr;
        int count = 0;

        count += _putchar('0');
        count += _putchar('x');

        if (address == 0)
                count += _putchar('0');
        else
                count += print_hex(address);

        return count;
}

/**
 * print_hex - Prints a hexadecimal number to the standard output
 * @number: The number to be printed
 *
 * Return: The number of characters that will be printed.
 */
int print_hex(unsigned long int number)
{
        char hex_chars[] = "0123456789abcdef";
        int count = 0;

        if (number / 16)
                count += print_hex(number / 16);

        count += _putchar(hex_chars[number % 16]);

        return count;
}

