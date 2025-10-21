#include <stdio.h>

/**
* main - Print l'alphabet avec putchar
* Return: 0
*/

int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
printf("\n");
return (0);
}
