#include "holberton.h"

/**
 *int_isupper - function to checks for uppercase
 *@c: variable to check
 *Return: 1 or 0
 */

int _isupper(int c);
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
