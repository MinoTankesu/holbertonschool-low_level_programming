#include "main.h"

/**
* _strspn - Gets the length of a prefix substring.
* @s: string.
* @accept: character accept.
* Return: s.
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int j;
for (i = 0; s[i] != '\0'; i++)
{
int found = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
found = 1;
break;
}
}
if (found == 0)
{
return (i);
}
}
return (i);
}
