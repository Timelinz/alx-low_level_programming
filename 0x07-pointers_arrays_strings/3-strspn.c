
Skip to content
Pulls
Issues
Marketplace
Explore
@Timelinz
piroadams /
alx-low_level_programming
Public

Code
Issues
Pull requests
Actions
Projects
Security

More
alx-low_level_programming/0x07-pointers_arrays_strings/3-strspn.c
Ndem Peter Adamson Task 0 - 9
Latest commit ec268ef yesterday
History
0 contributors
executable file 31 lines (28 sloc) 645 Bytes
#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s: the string to search
 * @accept: the characters to allow in the substring
 *
 * Description: calculates the length (in bytes) of the initial segment of s
 * which consists entirely of bytes in accept.
 *
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes fron accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	char *accept_pos;

	for (i = 0; s[i]; ++i)
	{
		for (accept_pos = accept; *accept_pos; ++accept_pos)
		{
			if (s[i]  == *accept_pos)
				break;
		}
		if (!*accept_pos)
			break;
	}

	return (i);
}
