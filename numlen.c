#include "main.h"

/**
 * numlen - computes number of digits in a number
 * @i: number
 * @base: base number number of parameter i
 * Return: number of digits
 */
int numlen(unsigned int i, int base)
{
	int digit = 0;
	if (i == 0)
		digit++;
	while (i >= 1)
	{
		i = i / base;
		digit++;
	}
	return (digit);
}
