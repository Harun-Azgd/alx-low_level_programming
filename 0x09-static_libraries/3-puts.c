#include "main.h"
/**
 * _puts - programs prints a string to stdout.
 * @str: Then string to be printed.
 * _putchar prints a new line
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
