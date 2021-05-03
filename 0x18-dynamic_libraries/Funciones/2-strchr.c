#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: string
 * @c: char
 * Return: pointer to 1st ocurrance fo c, else null
 */

char *_strchr(char *s, char c)
{
int i;

/*
* iterates through string to find char c an prints it
*/
	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);

}
