#include "main.h"
/**
 * main - a c code that check for alphabetic chracter
 * Returns: 1 if c is letter, lowercase otherwise 0.
 * @c: the chracter to be checked
*/

int_isalpha(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
		if (c <= 'Z' && c >= 'A')
		return (1);
		else
			return (0);
		return (0);
}
