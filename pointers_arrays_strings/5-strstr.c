#include "main.h"

/**
* _strstr - Function that locates a substring.
* @haystack: string.
* @needle: character accept.
* Return: haystack + 1 or NULL.
*/

char *_strstr(char *haystack, char *needle)
{
unsigned int i;
unsigned int j;
for (i = 0; haystack[i] != '\0'; i++)
{
int found = 1;
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
{
found = 0;
break;
}
}
if (found == 1)
{
return (haystack + i);
}
}
return (NULL);
}
