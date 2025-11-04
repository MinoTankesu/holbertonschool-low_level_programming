#include "main.h"

/**
* _pow_recursion - Function that returns the value of x power of y.
*@x: Number.
*@y: Power.
* Return: -1 if < 0, 1 if 0 or x * y.
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
