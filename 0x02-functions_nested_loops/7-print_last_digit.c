#include "holberton.h"

/**
 * print_last_digit - prints the last digit
 * @n: the character to be checked
 * Return: the last number
 */

int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld = -ld;

	_putchar(ld + '0');
	return (ld);
}
