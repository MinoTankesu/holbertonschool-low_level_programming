#include <stdio.h>

/**
* main - Print l'alphabet avec putchar
* Return: 0
*/

int main(void)
{
int i;
char letter;
for (i = 48; i <= 57; i++)
putchar(i);
for (letter = 'a'; letter <= 'f'; letter++)
putchar(letter);
printf("\n");
return (0);
}
