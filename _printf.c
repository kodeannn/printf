#include "main.h"

/**
 * _printf - mimics the original printf function
 * @format: identifier to look for
 * Return: an integer
 */

int _printf(const char *format, ...)
{
	match m[] = {
		{
			"%c",
