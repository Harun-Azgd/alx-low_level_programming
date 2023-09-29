#include "main.h"
#include <stdio.h>

/**
* main - print all arguments it recieves
* @argc: number of arguments
* @argv: array of arguments
*
* Return: Always 0 (success)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[1]);
	}
	return (0);
}
