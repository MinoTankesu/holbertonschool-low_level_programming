#include "main.h"

/**
* *leet - Programme pour encode un string en 1337.
*@str: le tableau.
* Return: str.
*/

char *leet(char *str)
{
int i;
int j;
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";
for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (str[i] == letters[j])
{
str[i] = numbers[j];
break;
}
}
}
return (str);
}
