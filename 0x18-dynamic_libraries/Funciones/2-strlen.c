#include <stdio.h>
#include "holberton.h"

/**
 * _strlen - length of a string
 * @s: pointer to string
 * Return: length of string
 */

int _strlen(char *s)
{
int str = 0;

while (s[str] != '\0')
{
str++;
}
return (str);
}
