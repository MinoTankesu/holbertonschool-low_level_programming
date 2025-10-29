#include "main.h"

/**
* puts_half - Programme pour print la moitie du string.
*@str: pointeur pour savoir le nombre de caractere.
* Return: longueur
*/

void puts_half(char *str)
{
int n = 0;
int i;
while (str[n] != '\0')
{
n++;
}
if (n % 2 == 0)
i  = n / 2;
else
i = (n - 1) / 2 + 1;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
