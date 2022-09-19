#include "main.h"

/**
*reset_to_98 - :check the code to reset
*@n: char for usage
*
*/

void reset_to_98()
{
	int n;

	n = 402;
	_putchar(n);
	reset_to_98(&n);
	_putchar(n);
}
