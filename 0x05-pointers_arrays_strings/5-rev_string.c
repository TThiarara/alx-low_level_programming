#include "main.h"

/*
 * rev_string - reverse string
 * @s: string to be reversed
 *
 * return: void
 */
void rev_string(char*s)
{
	int n, i;
	char *end_ptr, ch;
	
	end_ptr = s;

	for (n = 0 ; *end_ptr != '\0' ; n++)
	{
		end_ptr++;
	}
	end_ptr = end_ptr - 1;
	for (i = 0; i < n / 2 ; i++)
	{
		ch = *end_ptr;
		*end_ptr = *(s + 1);
		*s + i = ch;
		end_ptr--;
	}
}
