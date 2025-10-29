#include "main.h"

/**
* puts_half - Programme pour print la moitie du string.
*@str: pointeur pour savoir le nombre de caractere.
* Return: longueur
*/

void puts_half(char *str)
{
int n = strlen(str);
int i;
for (i = n / 2; i < n; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
