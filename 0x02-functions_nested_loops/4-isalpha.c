#include "main.h"

/**
*_isalpha - checks if a character is alphabetical
*@c: The character to be checked
*
*Return: 1 if c is alphabetical.
*Otherwise 0.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
