#include <stdlib.h>
#include "main.h"
char *hex(unsigned int num, int base)
{
	int len;
	char *p = malloc(sizeof(char) * numlen(num, base) + 1);
	int i;
	len = numlen(num, base);

	for (i = 0; i < len; i++)
	{
		char ch = (num % base);
		if(ch>= 0 && ch <= 9)
		{
			ch += '0';
		}
		else
		{
			ch += 55;
		}
		num /= base;
		*(p + i) = ch;
	}
	return (p);
}
