#include "holberton.h"

/**
 *print_line - function that draws a straight line
 *@n: number of _
 */

void print_line(int n)
{
	int j;

	if (n > 0)
	{
		for (j = 1; j <= n ; j++)
		{
			_putchar('_');
		}
	}

		_putchar('\n');
}
