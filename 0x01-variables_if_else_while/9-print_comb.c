#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int low;
	for (low = 0; low <= 9; low++)

	{
		putchar(low + '0');

		if (low < 9)

		{
			putchar(',');

			putchar(' ');


		}
	}
	putchar('\n');

	return (0);
}
