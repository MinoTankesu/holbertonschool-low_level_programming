#include "main.h"

/**
* print_sign - Petit programme pour return 1 si au dessus de 0
* 0 si egal a 0
* -1 si plus petit que 0
* @n: Pour tester l'alphabet
* Return: 0
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}


