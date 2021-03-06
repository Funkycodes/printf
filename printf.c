#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * _printf - custom printf function
 * @format: definite parameter
 * Return: printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int printed = 0, count = 0;
	int long num;
	unsigned int nm;
	char *s;
	char c;
	double f;

	if (!format)
		return (-1);

	va_start(list, format);

	while (format[count])
	{
		if (format[count] == '%')
		{
			if (format[count + 1] == '\0')
				return (-1);
			switch (format[count + 1])
			{
			case 'd':
			case 'i':
				num = va_arg(list, int);
				if (num < 0)
				{
					_putchar('-');
					printed++;
					num *= -1;
				}
				_printd(num, 10);
				printed += numlen(num, 10);
				count += 2;
				break;
			case 's':
				s = va_arg(list, char *);
				_puts(s);
				printed += _strlen(s);
				count += 2;
				break;
			case 'S':
				s = va_arg(list, char*);
				S(s, &printed);
				count += 2;
				break;
			case 'b':
				nm = va_arg(list,unsigned int);
				printed += numlen(nm, 2);
				count += 2;
				_printd(nm, 2);
				break;
			case 'c':
				c = va_arg(list,unsigned int);
				_putchar(c);
				count += 2;
				printed += 1;
				break;
			case 'f':
				f = va_arg(list, double);
				if (f < 0)
				{
					f *= -1;
					printed++;
					_putchar('-');
				}
				ftoa(f);
				count += 2;
				printed += numlen((int)f, 10) + 7;
				break;
			case 'r':
				s = va_arg(list, char *);
				_printrev(s);
				count += 2;
				printed += _strlen(s);
				break;
			case 'R':
				s = va_arg(list, char *);
				_puts(rot13(s));
				count+=2;
				printed += _strlen(rot13(s));
				break;
			case 'u':
				nm = va_arg(list, unsigned int);
				_printu((nm));
				printed += numlen(nm, 10);
				count += 2;
				break;
			case 'o':
				num = va_arg(list, int);
				if (num < 0)
				{
					num *= -1;
					_putchar('-');
					printed++;
				}
				_printd(num, 8);
				count += 2;
				printed += numlen(num, 8);
				break;
			case 'x':
				num = va_arg(list, int);
				if (num < 0)
				{
					num *= -1;
					printed++;
					_putchar('-');
				}
				_printx(num);
				count += 2;
				printed += numlen(num, 16);
				break;
			case 'X':
			case 'p':
				num = va_arg(list, int);
				if(num < 0)
				{
					num *= -1;
					_putchar('-');
					printed++;
				}
				_printrev(hex(num,16));
				count += 2;
				printed += numlen(num,16);
				break;
			case '%':
				_putchar('%');
				printed += 1;
				count += 2;
				break;
			default:
				count += 1;
				break;
			}
		}
		else
		{
			_putchar(format[count]);
			printed += 1;
			count += 1;
		}
	}
	va_end(list);
	return (printed);
}
