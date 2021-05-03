#include "holberton.h"

/**
 * _strcmp - Compare 2 strings
 * @s1: string
 * @s2: string
 * Return: difference
 */

int _strcmp(char *s1, char *s2)
{
int count;
count = 0;
/*
* while equal count
*/
while (s1[count] == s2[count] && s1[count] != '\0')
{
count++;
}

return (s1[count] - s2[count]);

}
