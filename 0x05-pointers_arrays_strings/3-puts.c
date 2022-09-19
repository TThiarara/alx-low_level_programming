#include "main.h"

/*
 * _puts - prints string
 * @str: string printed
 *
 * return: void always
 */

void _puts(char *str)
{
	while(*str !='\0')
	{
		_putchar(*str)
		str++
	}
	_putchar(10);
}
