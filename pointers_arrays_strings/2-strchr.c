#include "main.h"

/**
* _strchr - Locate a character in a string.
* @s: string.
* @c: character.
* Return: s.
*/

char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0' && s[i] != c)
{
i++;
if (s[i] == '\0' || s[i] == c || c == '\0')
{
return (&s[i]);
}
}
return (NULL);
}
