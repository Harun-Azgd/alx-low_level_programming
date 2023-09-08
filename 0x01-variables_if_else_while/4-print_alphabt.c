#include <stdio.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char low, e, q;

	e = 'e';
	q = 'q';
	
	for (low = 'e'; low <= 'q'; low++)
	{
		if (low != e && low != q)
			putchar (low);
	}
	putchar ('\n');
	return (0);
}
