#include "main.h"

/**
* _isdigit - Programme pour check si c'est une chiffre entre 0 et 9.
* Return: 0 Si ce n'est pas un chiffre.
* @c: ...
*/

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
