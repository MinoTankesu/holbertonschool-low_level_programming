#include <stdio.h>

/**
 * main - Petit programme pour print le poids de types
 * Return: 0
*/

int main(void)
{
printf("Size of a char: %u bytes(s)\n", sizeof(char));
printf("Size of an int: %u bytes(s)\n", sizeof(int));
printf("Size of a long int: %u bytes(s)\n", sizeof(long));
printf("Size of a long long int: %u bytes(s)\n", sizeof(long long int));
printf("Size of a float: %u byte(s)\n", sizeof(float));
return (0);
}
