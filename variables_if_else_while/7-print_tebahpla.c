#include <stdio.h>

/**
* main - Print l'alphabet avec putchar
* Return: 0
*/

int main(void)
{
char letter;
for (letter = 'z'; letter >= 'a'; letter--)
putchar(letter);
putchar('\n');
return (0);
}
