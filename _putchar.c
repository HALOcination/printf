#include "main.h"

/**
 * _putchar - standard output of written character
 * @c: character
 *
 * Return: 1 if (Success) and -1 if (Error)
 */

int _putchar(char c)
{
	return (buffer(c));
}

/**
 * buffer - save character
 * @c: character
 *
 * Return: 1
 */

int buffer(char c)
{
	static char buff[BUFFER_SIZE];
	static int i;

	if (c == -1 || i == BUFFER_SIZE)
	{
		write(1, buff, i);
		i = 0;
	}

	if (c != -1)
	{
		buff[i++] = c;
	}

	return (1);
}
