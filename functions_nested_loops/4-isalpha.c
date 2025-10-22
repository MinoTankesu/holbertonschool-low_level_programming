#include "main.h"

/**
* _isalpha - Petit programme pour return 1 si minuscule ou majuscule sinon 0
* @c: Pour tester l'alphabet
* Return: 0
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
