#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * This function writes a single character to the standard output using
 * the `write` system call from `unistd.h`.
 *
 * Return: On success, this function returns 1. On error, it returns -1 and
 * sets the `errno` variable appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
