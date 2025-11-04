#include "main.h"

/**
* is_prime_helper - Function pour aider is_prime_number.
*@n: Number.
*@i: I.
* Return: is_prime_helper(n, i + 1).
*/

int is_prime_helper(int n, int i)
{
if (i * i > n)
{
return (1);
}
else if (n % i == 0)
{
return (0);
}
else
{
return (is_prime_helper(n, i + 1));
}
}

/**
* is_prime_number - Function pour effectuer la recursion.
*@n: Number.
* Return: is_prime_helper(n, 2).
*/

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (is_prime_helper(n, 2));
}
