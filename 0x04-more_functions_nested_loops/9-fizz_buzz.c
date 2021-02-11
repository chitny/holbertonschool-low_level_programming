#include <stdio.h>

/**
 * main - Write a program that prints the numbers from 1 to 100
 * for multiples of three print Fizz and for the multiples of five print Buzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 && i % 5)
			printf("%d", i);
		if (i == 100)
			break;
		printf(" ");
	}
	printf("\n");
	return (0);
}
