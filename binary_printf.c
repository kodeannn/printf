#include "main.h"

/**
* binary_printf - the function converts always into binary
* @content: parameter/argument
* Return: Returns an int always.
*/

int binary_printf(va_list content)
{
int checker = 0;
int total_bits = 0;
int x, b = 1, c;
unsigned int digit = va_arg(content, unsigned int);
unsigned int z;

for (x = 0; x < 32; x++)
{
z = (b << (32 - x)) & digit;
if (z >> (31 - x))
checker = 1;
if (checker)
{
c = z >> (31 - x);
_putchar(c + '0');
total_bits++;
}
}
if (checker == 0)
{
total_bits++;
_putchar('0');
}
return (total_bits);
}

