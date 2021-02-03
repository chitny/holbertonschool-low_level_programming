#include<stdio.h>
#include <unistd.h>

/**
 *main - stderr out a phrase
 *Return: 1 as we ask in the exercise
 */

int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
