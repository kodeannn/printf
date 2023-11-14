#include "main.h"
/**
* printString - This function prints string in the printf project
* @content:  the inposed arguments
* Return: Returns (size) Always
*/

int printString(va_list content)
{
	int x;
	char *string;
	int size;

	string = va_arg(content, char *);
	if (string == NULL)
	{
		string = "(null)";
		length = _strlen(string);
		for (x = 0; x < size; x++)
			_putchar(string[x]);
		return (size);
	}
	else
	{
		size = _strlen(string);
		for (x = 0; x < size; x++)
			_putchar (string[x]);
		return (size);
	}
}
