#include <stdio.h>

/**
 * main - prints the size of various types on the computer based on
 * the computer it is compiled and run on.
 * Return: Always 0.
 */

int main(void)
Size of a char: 1 byte(s);
Size of an int: 4 byte(s);
Size of a long int: 4 byte(s);
Size of a long long int: 8 byte(s);
Size of a float: 4 byte(s);
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));

	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
