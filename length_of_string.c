#include "main.h"
#include <stdio.h>
/**
* _strlen -  a function that returns the length of a string.
* @s: paramather that holds length of string
* Return: Returns (x) Always
*/

int _strlen(char *s)
{
int x;

for (x = 0; s[x] != 0; x++)
	;
return (x);
}

#include "main.h"
#include <stdio.h>
/**
* _strlen_c -  a function that returns the length of a string.
* @s: paramather that holds length of string
* Return: Returns (x) Always
*/

int _strlen_c(const char *s)
{
int x;

for (x = 0; s[x] != 0; x++)
	;
return (x);
}
