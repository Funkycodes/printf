#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
	int _strlen(const char *p);
	void _puts(const char *p);
	void _printrev(char *s);
	int numlen(unsigned int i, int base);
	char *itoa(unsigned int num, int base);
	char *hex(unsigned int num, int base);
	void ftoa(double n);
	void _printd(int num, int base);
	void _printu(unsigned int num);
	void _printx(int num);
	int _putchar(char c);
	int _printf(const char *format, ...);
	char *rot13(char *p);

#endif
