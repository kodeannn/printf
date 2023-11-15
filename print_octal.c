#include "main.h"

/**
 * print_octal - used to print octal integers
 * @val: octal value to be printed
 * Return: the printed octal value
 */

int print_octal(va_list val)
{
	int j;
	int *arr;
	int k = 0;
	unsigned int dig = va_arg(val, unsigned int);
	unsigned int met = dig;

	while (dig / 8 != 0)
	{
		dig /= 8;
		k++;
	}
	k++;
	arr = malloc(k * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (j = 0; j < k; j++)
	{
		arr[j] = met % 8;
		met /= 8;
	}
	for (j = k - 1; j >= 0; j--)
	{
		_putchar(arr[j] + '0');
	}
	free(arr);
	return (k);
}
