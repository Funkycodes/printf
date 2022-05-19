#include "main.h"

/**
 * _printrev - function to print a string in reverse
 * @s: parameter
 */
void _printrev(char *s)
{
	if (!*s)
		return;
	s++;
	_printrev(s);
	s--;
	_putchar(*s);
}

