#include <stdio.h>

/**
 * main - is the function that prints numbers with , and space
 * Return: returns 0 if everything was correct
 */

int main(void)
{
int n;

for (n = 48; n <= 57; n++)
{
putchar(n);
if (n < 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
