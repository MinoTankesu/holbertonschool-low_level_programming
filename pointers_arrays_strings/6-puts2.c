#include "main.h"

/**
* puts2 - Programme pour print la string tous les 2 caracteres.
*@str: pointeur pour savoir le nombre de caractere.
* Return: ...
*/

void puts2(char *str)
{
int longueur = 0;
while (str[longueur] != '\0')
{
_putchar(str[longueur]);
if (str[longueur + 1] == '\0')
{
break;
}
longueur += 2;
} 
_putchar('\n');
}
