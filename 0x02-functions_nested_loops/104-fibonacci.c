#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int i, j, k, n1, n2, m1, m2;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	n1 = j / 1000000000;
	n2 = j % 1000000000;
	m1 = k / 1000000000;
	m2 = k % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", m1 + (m2 / 1000000000));
		printf("%lu", m2 % 1000000000);
		m1 = m1 + n1;
		n1 = m1 - n1;
		m2 = m2 + n2;
		n2 = m2 - n2;
	}

	printf("\n");

	return (0);
}
