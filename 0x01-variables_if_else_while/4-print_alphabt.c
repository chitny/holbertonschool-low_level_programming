#include <stdio.h>

/**
 *main - a function to display the alphabet
 *Return: 0 if everything is ok
 */

int main(void)
{
	char ch='a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar ('\n');
	return (0);
}
