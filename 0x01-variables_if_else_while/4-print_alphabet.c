#include <stdio.h>

/**
 *main - a function to display the alphabet
 *Return: 0 if everything is ok
 */

int main(void)
{
	char al;

	while (al<='al')
	{
		if (al != 'q' && al != 'e')
		{
			putchar (al);
		}
		al++;
	}
	putchar ('\n');
	return (0);
}
