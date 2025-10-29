#include "main.h"

/**
* _strcpy - Programme pour print la string.
*@dest: Destination.
*@src: Source.
* Return: longueur
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
