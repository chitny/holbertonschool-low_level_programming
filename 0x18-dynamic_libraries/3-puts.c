#include <stdio.h>
#include "holberton.h"

/**
 * _puts - outputs a line of stream
 * @str: inherited from main
 * Return: 0
 */

void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{_putchar(str[i]);
}
_putchar('\n');
}
