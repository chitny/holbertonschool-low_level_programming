#include <stdio.h>

/**
 *main - a function to display the alphabet
 *Return: 0 if everything is ok
 */

int main(void)
{
	char al;

	for (al = 'a' ; al <= 'z' ; al++)
	{
		if (al != 'q' && al != 'e')
			putchar(al);
		else
			al++;
	}
	putchar('\n');
	return (0);
}