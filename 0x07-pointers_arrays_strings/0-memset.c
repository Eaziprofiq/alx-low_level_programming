#include "main.h"

/** _memset - dive
 * @s: pointer to char params
 * @b: data to change
 * @n: index
 * return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int I;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}
