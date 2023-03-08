#include <unistd.h>

/**
 * _putchar - writes the char c to standoutput
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returne.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
