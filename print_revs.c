#include "main.h"

/**
 * print_rev - function used to print a string in reverse
 * @val: arguments
 * Return: the string reversed
 */

int print_rev(va_list val)
{
	char *d = va_arg(val, char*);
	int j;
	int k = 0;

	if (d == NULL)
		d = "(null)";
	while (d[k] != '\0')
		k++;
	for (j = k - 1; j >= 0; j--)
		_putchar(d[j]);
	return (k);
}
