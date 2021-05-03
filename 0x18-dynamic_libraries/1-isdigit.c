#include "holberton.h"

/**
 * _isdigit - checks if char is numer 0 to 9
 * @c: inherited from main file
 * Return: 1 if digit else 0
 */

int _isdigit(int c)
{
if (c > 47 && c < 58)
{
return (1);
}
else
{
return (0);
}
}
