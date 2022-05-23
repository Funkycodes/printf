#include "main.h"

void S(const char* p,int *printed)
{
	int i = 0;
	while(p[i])
	{
		if(((p[i] > 0) && (p[i] < 32)) || (p[i] >= 127))
		{
			_printf("\\x");
			*printed +=2;
			if(numlen(p[i],16) < 2)
			{
				_printf("0");
				*printed += 1;
			}
			_printf("%X",p[i]);
			*printed += 1;
		}
		else
		{
			_putchar(p[i]);
			*printed+=1;
		}
		i++;
	}
}

