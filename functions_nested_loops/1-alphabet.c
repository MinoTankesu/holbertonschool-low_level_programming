#include "main.h"

/**
* main - Petit programme pour print l'alphabet avec un retour a la ligne
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
