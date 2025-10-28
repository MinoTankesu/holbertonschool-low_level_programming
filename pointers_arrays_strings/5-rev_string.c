#include "main.h"

/**
* print_rev - Programme pour print la string a l'envers.
*@s: pointeur pour savoir le nombre de caractere.
* Return: longueur
*/

void rev_string(char *s)
{
int longueur = 0;
while (s[longueur] != '\0')
{
longueur++;
}
for (longueur = longueur - 1; longueur >= 0; longueur--)
{
  return(s);
}
}
