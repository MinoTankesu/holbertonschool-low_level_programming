#include "main.h"

/**
* *cap_string - Programme pour ecrire avec une majuscule a chaque debut de mot.
*@str: str.
* Return: str.
*/


char *cap_string(char *str)
{
int i = 0;
int j;
char separators[] = " \t\n,;.!?\"(){}";
if (str[0] >= 'a' && str[0] <= 'z')
str[0] -= 32;
for (i = 1; str[i] != '\0'; i++)
{
for (j = 0; separators[j] != '\0'; j++)
{
if (str[i - 1] == separators[j] && (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] -= 32;
break;
}
}
}
return (str);
}
