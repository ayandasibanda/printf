#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_char - Prints a character
 * @c: The character to print
 *
 * Return: The number of characters printed
 */
static int print_char(char c)
{
        return putchar(c);
}

/**
 * print_string - Prints a string
 * @s: The string to print
 *
 * Return: The number of characters printed
 */
static int print_string(char *s)
{
        int count = 0;

        while (*s != '\0')
        {
                count += putchar(*s);
                s++;
        }

        return count;
}
