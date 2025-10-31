#include "main.h"

/**
* *cap_string - Programme pour ecrire avec une majuscule a chaque debut de mot.
*@str: str.
* Return: str.
*/


char *cap_string(char *str)
{
int i;
int word = 1;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
if (word)
{
str[i] = (int)str[i] - 32;
word = 0;
}
}
else if (str[i] >= 'A' && str[i] <= 'Z')
{
word = 0;
}
else
{
word = 1;
}
}
return (str);
}
