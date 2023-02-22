#include <unistd.h>

/**
 * _putchar - Write the character c to stdout
 * @c: The character tp print
 * Return 1 (Success)
 * On error, -1 is returned, and errno is set appropriatly.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
