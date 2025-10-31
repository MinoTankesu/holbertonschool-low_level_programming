#include "main.h"

/**
* *string_toupper - Programme pour changer les lettres minuscules en majuscule.
*@str: le tableau.
* Return: str.
*/

char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = (int)str[i] - 32;
}
return (str);
}
