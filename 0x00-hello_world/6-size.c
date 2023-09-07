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

printf("Size of a char: %lu byte(s)", sizeof(a));
printf("Size of int: %lu byte(s)", sizeof(b));
printf("Size of a long int: %lu byte(s)", sizeof(c));
printf("Size of a long long int: %lu byte(s)", sizeof(d));
printf("size of float: %lu byte(s)", sizeof(f));
return (0);
}
