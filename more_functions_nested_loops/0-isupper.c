#include "main.h"

/**
* _isupper - Programme pour check si la lettre est minuscule ou majuscule.
* Return: 0 Si minuscule, sinon majuscule.
* @c: ...
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
