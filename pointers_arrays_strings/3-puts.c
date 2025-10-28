#include "main.h"

/**
* _puts - Programme pour print la string.
*@str: pointeur pour savoir le nombre de caractere.
* Return: longueur
*/

void _puts(char *str)
{
int longueur;
for (longueur = 0; str[longueur] != '\0'; longueur++)
{
_putchar(str[longueur]);
}
_putchar('\n');
}
