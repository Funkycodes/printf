#include "main.h"

/**
 * _puts - writes argument to stdout
 * @p: parameter
 * Return: void
 */
int _puts(const char *p)
{
	if(p == NULL)
		return NULL;
	while (*(p))
	{
		_putchar(*(p++));
	}
	return 0;
}

