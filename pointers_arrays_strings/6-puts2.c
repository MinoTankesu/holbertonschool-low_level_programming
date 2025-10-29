#include "main.h"

/**
* rev_string - Programme pour print la string a l'envers.
*@s: pointeur pour savoir le nombre de caractere.
* Return: longueur
*/

void puts2(char *str)
{
int longueur = 0;
while (str[longueur] != '\0')
{
_putchar(str[longueur]);
longueur += 2;
}
_putchar('\n');
}
