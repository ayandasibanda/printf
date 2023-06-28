#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * _printf - Prints formatted output to the standard output.
 * @format: The format string specifying the output format.
 * @...: Additional arguments to be formatted according to the format string.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...);

/**
 * _putchar - Writes a character to the standard output.
 * @c: The character to be written.
 *
 * Return: On success, the character written. On error, -1 is returned.
 */
int _putchar(char c);

/**
 * print_number - Prints an integer to the standard output.
 * @number: The integer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_number(int number);

/**
 * print_string - Prints a string to the standard output.
 * @s: The string to be printed.
 *
 * Return: The number of characters printed.
 */
int print_string(char *s);

/**
 * print_char - Prints a single character to the standard output.
 * @c: The character to be printed.
 *
 * Return: The number of characters printed.
 */
int print_char(char c);

/**
 * print_pointer - Prints a pointer address to the standard output.
 * @ptr: The pointer to be printed.
 *
 * Return: The number of characters printed.
 */
int print_pointer(void *ptr);

/**
 * print_hex - Prints a hexadecimal number to the standard output.
 * @number: The number to be printed.
 *
 * Return: The number of characters printed.
 */
int print_hex(unsigned long int number);

#endif
