#include "main.h"

/**
 * print_num - used to print numbers
 * @args: argument to print
 * Return: number of characters printed
 */

int print_num(va_list args)
{
	int m = va_arg(args, int);
	int dig, last = m % 10, number, exp = 1;
	int j = 1;

	m = m / 10;
	dig = m;

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
			number = dig / exp;
			_putchar(number + '0');
			dig = dig - (number * exp);
			exp = exp / 10;
			j++;
		}
	}
	_putchar(last + '0');

	return (j);
}

/**
 * print_de - used to print decimal numbers
 * @args: argument to print
 * Return: integer
 */

int print_de(va_list args)
{
	int m = va_arg(args, int);
	int dig, last = m % 10, number;
	int j = 1;
	int exp = 1;

	m = m / 10;
	dig = m;

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
			j++;
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
	return (j);
}
