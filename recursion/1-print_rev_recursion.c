#include "main.h"

/**
* _print_rev_recursion - Programme qui permet de print une string à l'envers.
*@s: La string.
* Return: ...
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);
}
