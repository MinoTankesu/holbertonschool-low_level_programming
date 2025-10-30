#include "main.h"

/**
 * *_strcat - Programme pour concatenates les 2 strings.
 *@dest: dest.
 *@src: src.
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
return (dest);
}
