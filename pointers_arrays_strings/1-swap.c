#include "main.h"

/**
* swap_int - Permet de swap la value de a et b.
* @a: a
* @b: b
* Return: ...
*/

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
