#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _putchar(char c);
int print_number(int number);
/**
 * print_string - Prints a string to the standard output.
 * @s: The string to be printed.
 *
 * Return: The number of characters printed.
 */
static int print_string(char *s);

/**
 * print_char - Prints a single character to the standard output.
 * @c: The character to be printed.
 *
 * Return: The number of characters printed.
 */
static int print_char(char c);

#endif
