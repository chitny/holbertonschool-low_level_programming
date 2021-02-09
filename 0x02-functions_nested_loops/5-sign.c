#include "holberton.h"

/**
 * print_sign - prints the sign of a number (+,-,0)
 * Return: 1, 0 and -1 depending of a condition
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
