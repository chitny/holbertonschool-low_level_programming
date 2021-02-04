#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - have an if who returns positive or negative for variable n
 *Return: 0 if everything is ok
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
