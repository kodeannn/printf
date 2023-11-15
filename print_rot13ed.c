#include "main.h"

/**
 * print_rot13 - convert to rot13
 * @val: arguments to be used
 * Return: counter
 */

int print_rot13(va_list val)
{
	int j, k, c = 0;
	int l = 0;
	char *d = va_arg(val, char*);
	char e[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char f[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (d == NULL)
		d = "(null)";
	for (j = 0; d[j]; j++)
	{
		l = 0;
		for (k = 0; e[k] && !l; k++)
		{
			if (d[j] == e[k])
			{
				_putchar(b[k]);
				c++;
				l++;
			}
		}
		if (!l)
		{
			_putchar(d[j]);
			c++;
		}
	}
	return (c);
}
