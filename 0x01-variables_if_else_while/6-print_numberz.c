#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');

	return (0);
}