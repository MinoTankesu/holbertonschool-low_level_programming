#include "main.h"

/**
* _puts_recursion - Puts mais grâce a une recursion.
*@s: La string.
* Return: ...
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}
_putchar(*s);
_puts_recursion(s + 1);
}
