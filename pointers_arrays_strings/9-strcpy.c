#include "main.h"

/**
* print_array - Programme pour print la string.
*@a: pointeur pour savoir le nombre de caractere.
*@n: longueur du tableau.
* Return: longueur
*/

char *_strcpy(char *dest, char *src)
{
int i;
while (src[i] > 0)
{
_putchar(src[i]);
i++;
}
*src = *dest;  
return (dest);
}
