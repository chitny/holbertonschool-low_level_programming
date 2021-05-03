#include "holberton.h"

/**
 * _strncat - concatenates n characters of source string to destination string
 * @src: source string = s2 in main
 * @dest: destination string = s1 in main
 * @n: value
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
int count = 0, j;
/*
 * stores the length of the destination string on the count variable
*/
while (dest[count] != '\0')
{
++count;
}

/*
 * concatenates n chars of source string to destination string
*/
for (j = 0; src[j] != '\0'; ++j, ++count)
{
if (j < n)
dest[count] = src[j];
}

/*
* terminates the destination string
*/
dest[count] = '\0';

return (dest);

}
