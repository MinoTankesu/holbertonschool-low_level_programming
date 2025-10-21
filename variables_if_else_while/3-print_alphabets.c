#include <stdio.h>

/**
* main - Print l'alphabet avec putchar
* Return: 0
*/

int main(void)
{
char letter;
char letter2;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (letter2 = 'A'; letter2 <= 'Z'; letter2++)
putchar(letter2);
printf("\n");
return (0);
}
