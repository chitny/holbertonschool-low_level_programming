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
		putchar(al);
	}
	putchar('\n');
return (0);
}
