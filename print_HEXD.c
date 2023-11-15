#include "main.h"

/**
 * print_HEXD - used to convert to hexadecimal
 * @val: value to be converted
 * Return: counter
 */

int print_HEXD(va_list val)
{
	int j;
	int *arr;
	int k = 0;
	unsigned int dig = va_arg(val, unsigned int);
	unsigned int met = dig;

	while (dig / 16 != 0)
	{
		dig /= 16;
		k++;
	}
	k++;
	arr = malloc(k * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (j = 0; j < k; j++)
	{
		arr[j] = met % 16;
		met /= 16;
	}
	for (j = k - 1; j >= 0; j--)
	{
		if (arr[j] > 9)
			arr[j] = arr[j] + 7;
		_putchar(arr[j] + '0');
	}
	free(arr);
	return (counter);
}
