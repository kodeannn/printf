#include "main.h"

/**
* printChar - This function prints character in the printf project
* @content:  the inposed arguments
* Return: Returns (0) Always
*/

int printChar(va_list content)
{
	char character;

	character = va_arg(content, int);
	_putchar(charcter);
	return (0);
}

