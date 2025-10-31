#include "main.h"

/**
* *_strcpy - Programme pour copier la string.
*@dest: la destination.
*@src: la source.
*@n: n.
* Return: dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
char* start = dest;
while (n > 0 && *src != '\0')
{
*dest = *src;
dest++;
src++;
n--;
}
while (n > 0)
{
*dest = '\0';
dest++;
n--;
}
return start;
}
