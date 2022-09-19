#include "main.h"

/*
 * print_rev - prints
 * @s: string
 *
 * return - ni pesa anataka
 */
void print_rev(char *s)
{
	char *p;
	p = s;
	while (*s != '\0')
	{
		s++;
	}
	for (s = (s - 1) ; s >= p ; --s)
	{
		_putchar(*s);
	}
	_putchar(10);
}
