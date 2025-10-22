#include "main.h"

/**
* main - Petit programme pour print l'alphabet avec un retour a la ligne
* Return: 0
*/

void print_alphabet(void)
{
for (char c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
