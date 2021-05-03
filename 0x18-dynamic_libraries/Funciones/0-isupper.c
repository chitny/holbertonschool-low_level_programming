#include "holberton.h"

/**
 * _isupper - Check for uppercase letters
 * @c: inherited from main file
 * Return: 1 if upper else 0
 */

int _isupper(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else
{
return (0);
}
}
