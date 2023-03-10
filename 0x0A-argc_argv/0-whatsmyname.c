#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc - count numbers of args values passed
 * @argv - contains values passed in the args
 * Return (0);
 */


int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i <= argc; i++)
	{
		printf("argc[%d] = %s\n", i, argv[i]);
	}

	return (0);
}
