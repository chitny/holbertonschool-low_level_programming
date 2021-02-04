#include <stdio.h>

/**
 *main - a function to display the alphabet
 *Return: 0 if everything is ok
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);

}
