#include "main.h"

/**
* _islower - Petit programme pour return 1 si minuscule sinon 0 si majuscule
* @c: Pour tester l'alphabet
* Return: 0
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
