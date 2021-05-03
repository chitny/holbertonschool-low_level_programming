#include "holberton.h"

/**
* _islower - Check for lowercase.
* @c: input value
*
* Description: check lowercase using ASCII
* section header: holberton
* Return: 1 if lower, else 0
*/

int _islower(int c)
{
if (c < 123 && c > 96)
{
return (1);
}
else
return (0);
}
