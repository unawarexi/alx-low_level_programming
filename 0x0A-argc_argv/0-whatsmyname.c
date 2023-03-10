#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line
 * @argc - count numbers of args values passed
 * @argv - contains values passed in the args
 * Return (0);
 */


int main(int argc __attribute__((unused)), char *argv[])
{

	{
		printf("%s\n", *argv);
	}

	return (0);
}
