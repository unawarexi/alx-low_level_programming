#include <stdio.h>
#include "main.h"

/**
 * main -  a program that prints the number of arguments passed into it.
 * @argc: number of args
 * @argv: arrays of args
 * Return: Always 0 (sucess)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
