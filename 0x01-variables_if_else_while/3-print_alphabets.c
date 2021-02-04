#include <stdio.h>

/**
 *main - a function to display the alphabet a to Z
 *Return: 0 if everything is ok
 */

int main(void)
{
	char al;

	for (al = 'a' ; al <= 'z' ; al++)
	{
		putchar(al);
	}
	for (al = 'A' ; al <= 'Z' ; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
