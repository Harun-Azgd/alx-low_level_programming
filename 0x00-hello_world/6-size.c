#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 on success
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu 1 byte(s)", sizeof(a));
printf("Size of int: %lu 4 byte(s)", sizeof(b));
printf("Size of a long int: %lu 8 byte(s)", sizeof(c));
printf("Size of a long long int: %lu 8 byte(s)", sizeof(d));
printf("size of float: %lu 4 byte(s)", sizeof(f));
return (0);
}
