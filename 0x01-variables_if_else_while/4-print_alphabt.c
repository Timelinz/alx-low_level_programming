#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * description - user
 * Return: Always 0 (success)
 */

int main(void)
{
	char lower, e, q;

		e = 'e';
		q = 'q';

	for (lower = 'a'; lower <= 'z';)
{
	if (lower != e && lower != q)
		putchar(lower);
}
	putchar('\n');
	return (0);
}
