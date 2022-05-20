#include <stdlib.h>
#include "main.h"

/**
 * rot13 - encodes a string using the rot13 algorithm
 * @p: parameter
 * Return: encoded string
 */

char *rot13(char *p)
{
	int i = 0;
	char *str;
	
	str = malloc(sizeof(char) * _strlen(p) + 1);
	if(str == NULL)
		return (NULL);
		
	while (p[i] != '\0')
	{
		if ((p[i] >= 'a' && p[i] <= 'm') || (p[i] >= 'A' && p[i] <= 'M'))
		{
			str[i] = p[i] + 13;
		}
		else if ((p[i] >= 'n' && p[i] <= 'z') || (p[i] >= 'N' && p[i] <= 'Z'))
		{
			str[i] = p[i] - 13;
		}
		else
			(str[i] = p[i]);
		i++;
	}
	str[i] = '\0';
	
	return (str);
}

