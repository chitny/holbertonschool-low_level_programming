#include <stdio.h>

/**
 * main - prints the numbers from 00 to 99
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 10; j++)
	{

		putchar(i + '0');
		putchar(j + '0');
		if (i == 9 && j == 9)
			break;
		putchar(',');
		putchar(' ');
	}
}
	putchar('\n');
return (0);
}
