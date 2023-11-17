#include "main.h"
/**
* pointer_printf - this function executes a pointer
* @content: content holding
* Return: Always Returns an integer
*/

int pointer_printf(va_list content)
{
	void *x;
	char *y = "(nil)";
	long int v;
	int o;
	int z;

	x = va_arg(content, void *);
	if (x == NULL)
	{
		for (z = 0; y[z] != '\0'; z++)
			_putchar (y[z]);
		return (z);
	}
	v = (unsigned long int)x;
	_putchar ('0');
	_putchar ('x');
	o = print_hextra(v);
	return (o + 2);
}
