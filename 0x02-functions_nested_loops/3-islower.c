#include "main.h"

/**
*_islower - checks if char is lower
*@c: the characer
*Description - Used
*Return: 1 if c is lowercase
*/

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
