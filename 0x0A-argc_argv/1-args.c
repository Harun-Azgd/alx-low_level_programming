#include "main.h"
#include <stdio.h>

/**
* main - prints the number of arguments passed to the program
* @argc: number of argument.
* @argv: array of argument.
*
* Return: Always zero
*/
int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
