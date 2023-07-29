#include "main.h"

/**
 * _puts - Prints a string followed by a newline character.
 * @str: The string to print.
 *
 * Return: Number of characters printed.
 */
int _puts(char *str)
{
	int count = 0;

	while (*str)
		count += _putchar(*str++);

	return (count);
}

/**
 * _putchar - Writes the character 'c' to stdout.
 * @c: The character to print.
 *
 * Return: On success, returns 1. On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(int c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	/* If BUF_FLUSH or buffer is full, flush the contents to stdout */
	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}

	/* If not BUF_FLUSH, store the character in the buffer */
	if (c != BUF_FLUSH)
		buf[i++] = c;

	return (1);
}
