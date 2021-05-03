#include "holberton.h"

/**
 * _isalpha - check if it's a letter
 * @c: input value
 *
 * Return: 1 if letter, else 0
 */

int _isalpha(int c)
{
if (c > 64 && c < 92)
{
return (1);
}
else if (c > 96 && c < 123)
{
return (1);
}
else
{
return (0);
}
}
