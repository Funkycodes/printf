#include "main.h"

/**
 * _puts - writes argument to stdout
 * @p: parameter
 * Return: void
 */
void _puts(const char *p)
{
	while (*(p))
	{
		_putchar(*(p++));
	}
}

