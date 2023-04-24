#include "main.h"

/**
 * checker - ctrl format commes
 * @s: str
 * @list: args
 * Return: size of (args + str)
 */

int checker(const char *s, va_list list)
{
	int size, i, deffer;

	size = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '%')
		{
			deffer = check(s, list, &i);
			if (deffer == -1)
				return (-1);

			size += deffer;
			continue;
		}

		_putchar(s[i]);
		size++;
	}

	return (size);
}

/**
 * check - controlls % elements commes
 * @s: str
 * @list: args
 * @i: index
 * Return: int (num of char prntd)
 */

int check(const char *s, va_list list, int *i)
{
	int size, y, n_format;
	format formats[] = {
		{'s', _print_string},
		{'c', _print_char},
		{'d', _print_int},
		{'i', _print_int}
	};

	*i = *i + 1;

	if (s[*i] == '\0')
		return (-1);
	if (s[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	n_format = sizeof(formats) / sizeof(formats[0]);

	for (size = y = 0; y < n_format; y++)
	{
		if (s[*i] == formats[y].t)
		{
			size = formats[y].f(list);
			return (size);
		}
	}

	_putchar('%'), _putchar(s[*i]);

	return (2);
}
