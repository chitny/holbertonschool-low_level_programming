#include <stdio.h>

/**
 * main - prints the numbers from 00 to 99
 * Return 0 if everything is correct
 */
int main(void)
{
	int i,m;

	for (i = 0; i < 10; i++)
	{
		for (m = 0; m < 10; m++)
		{

			putchar(i + '0');
			putchar(m + '0');
			if (i == 9 && m == 9)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
