#include "main.h"

/**
* rev_string - Programme pour print la string a l'envers.
*@s: pointeur pour savoir le nombre de caractere.
* Return: longueur
*/

void rev_string(char *s)
{
int longueur = 0;
int i;
char temp;
while (s[longueur] != '\0')
{
longueur++;
}
for (i = 0; i < longueur / 2; i++)
{
temp = s[i];
s[i] = s [longueur - i - 1];
s[longueur - i - 1] = temp;
}
}
