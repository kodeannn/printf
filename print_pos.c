#include "main.h"

/**
 * print_pos - used to print unsigned integers
 * @args: argument to print
 * Return: number of characters printed
 */

int print_pos(va_list args)
{
	unsigned int m = va_args(args, unsigned int);
	int dig, last = m % 10, number, exp = 1;
	int j = 1;

	m = m / 10;
	dig = n;

	if (last < 0)
	{
		_putchar('-');
		dig = -dig;
		m = -m;
		last = -last;
		j++;
	}
	if (dig > 0)
	{
		while (dig / 10 != 0)
		{
			exp = exp * 10;
			dig = dig / 10;
		}
		dig = m;
		while (exp > 0)
		{
			number = dig / exp;
			_putchar(number + '0');
			dig = dig - (number * exp);
			exp = exp / 10;
			j++;
		}
	}
	_putchar(last + '0');
	return (1);
}
