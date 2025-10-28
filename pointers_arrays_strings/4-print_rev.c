#include "main.h"

/**
* print_rev - Programme pour print la string a l'envers.
*@s: pointeur pour savoir le nombre de caractere.
* Return: longueur
*/

void print_rev(char *s)
{
int longueur;
while (s[longueur] != '\0')
{
longueur++;
}
for (longueur = longueur - 1; longueur >= 0; longueur--)
{
_putchar(s[longueur]);
}
_putchar('\n');
}
