#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char low;

	low = 'a';

	while (low <= 'z')
	{
		if (low != 'e' && low != 'q')
		{
			ptuchar(low);
		}
		low++;
	}
	putchar('\n');

	return (0);
}
