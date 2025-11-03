#include "main.h"

/**
* _strlen_recursion - Programme qui permet de return la longueur de la string.
*@s: La string.
* Return: ...
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
