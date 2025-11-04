#include "main.h"

/**
* factorial - Function that returns the factorial of a given number.
*@n: Number.
* Return: -1 if < 0, 1 if 0 or 1.
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}
