#include "main.h"

/**
* print_line - Programme pour ecrire des lignes.
* @n: n
* Return: ...
*/

void print_diagonal(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
_putchar(92);
_putchar('\n');
}
}
}
