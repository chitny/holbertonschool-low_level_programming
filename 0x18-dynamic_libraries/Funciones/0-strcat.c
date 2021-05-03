#include "holberton.h"

/**
 *  _strcat - concatenates two strings
 * @src: source string = s2 in main
 * @dest: destination string = s1 in main
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
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
 * concatenates source string to destination string
*/
for (j = 0; src[j] != '\0'; ++j, ++count)
{
dest[count] = src[j];
}

/*
* terminates the destination string
*/
dest[count] = '\0';

return (dest);

}
