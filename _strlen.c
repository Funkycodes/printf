#include "main.h"

/**
 * _strlen - computes lenght of a string/character array
 * @p: parameter
 * Return: string length
 */
int _strlen(const char *p)
{
	int i = 0;

	while (*(p++))
		i++;
	return (i);
}

