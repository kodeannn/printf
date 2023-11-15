#include "main.h"
/**
 * print_strex - used to print exclusive strings
 * @val: value
 * Return: number of char printed
 */

int print_strex(val_list val)
{
	char *d;
	int j; len = 0;
	int vall;

	d = va_arg(val, char *);
	if (d == NULL)
		d = "(null)";
	for (j = 0; d[j] != '\0'; j++)
	{
		if (d[j] < 32 || d[j] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			vall = d[j];
			if (vall < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_hextra(vall);
		}
		else
		{
			_putchar(d[j]);
			len++;
		}
	}
		return (len);
}
