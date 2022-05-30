#include <stdlib.h>
#include "main.h"

/**
 * itoa - converts integer to string
 * @num: number to be converted
 * @base: base number of parameter num
 * Return: pointer to string
 */ 
char *fitoa(unsigned int num, int base)
{
	int len;
	char *p = malloc(sizeof(char) * numlen(num, base) + 1);
	int i;
	char ch;
	len = numlen(num, base);

	for (i = 0; i < len; i++)
	{
		ch = (num % base);
		if (ch >= 0 && ch <= 9)
		{
			ch += '0';
		}
		else
		{
			ch += 87;
		}
		num /= base;
		*(p + i) = ch;
	}
	return (p);
}

/**
 * ftoa - converts float to string and outpurs it to stdout
 * @n: parameter
 */
void ftoa(double n)
{
	int ipart = (int)n;
	double fpart = n - (double)ipart;

	_printd(ipart, 10);
	fpart = fpart * 1000000;
	_putchar('.');
	_printd((int)fpart, 10);
}

/**
 * _printd - outputs number to stdout
 * @num: first parameter
 * @base: second parameter
 */
void _printd(int num, int base)
{
	if (num < 0)
		_putchar('-');
	if (num < 0)
		num *= -1;
	_printrev(fitoa(num, base));
}

/**
 * _printu - outputs unsigned int to stdout
 * @num: parameter 
 */
void _printu(unsigned  int num)
{
	_printrev(fitoa(num, 10));
}

/**
 * _printx - same as printd
 * @num: parameter
 */
void _printx(int num)
{
	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}
	_printrev(fitoa(num, 16));
}

