#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - function
 *
 * return 0 always
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}

	putchar('\n');

	return(0);
}
