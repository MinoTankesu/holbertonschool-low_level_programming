#include "main.h"

/**
* _strcmp - Programme pour compare 2 strings.
*@s1: premiere string.
*@s2: deuxieme string.
* Return: la comparaison.
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s1 == *s2)
{
++s1;
++s2;
}
return ((int)(unsigned char)(*s1) - (int)(unsigned char)(*s2));
}
