#include <stdio.h>

/**
* main - Petit programme pour afficher l'alphabet sans la lettre a et e
* Return: 0
*/

int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == 'q' || letter == 'e')
continue;
putchar(letter);
}
putchar('\n');
return (0);
}

