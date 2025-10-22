#include "main.h"

/**
* main - Petit programme pour print l'alphabet avec un retour a la ligne
* Return: 0
*/

void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
printf("\n");
}
