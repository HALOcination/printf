#include "main.h"
/**
 * _print_char - handling %c
 *
 * @list: list
 *
 * Return: 1
 */
int _print_char(va_list list)
{
	int deffer;

	deffer = va_arg(list, int);
	_putchar(deffer);

	return (1);
}
/**
 * print - print char
 * @s: str
 *
 * Return: i
 */

int print(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}
/**
 * _print_string - handling %s
 * @list: list
 * Return: c
 **/
int _print_string(va_list list)
{
	char *str = va_arg(list, char *);
	int c;

	c = print((str != NULL) ? str : "(null)");

	return (c);
}
/**
 * _strlen - len of str
 * @s: str
 *
 * Return: i
 **/

int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
/**
 * _print_int - handel %d %i
 *
 * @list: lists
 *
 * Return: c
 */

int _print_int(va_list list)
{
	int c;
	char *p;

	p = *_ita(va_arg(list, int), 10);
	c = print((p != NULL) ? p : "NULL");

	return (c);
}
