#include "main.h"

/**
* _memcpy -> memory copy
* @dest: is destination memory
* @src: is source memory
* @n: number of bytes to be copied
* Return: string copied from source
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

<<<<<<< HEAD
	for (a = 0; );
}
=======
	for (a = 0; a < n; a++)
		dest[a] = src[a];
<<<<<<< HEAD
	return (dest);
}
>>>>>>> 6c1eee895bad07010107fd0ee168dc94ca922f9e
=======
	return (dest);
>>>>>>> 77dcae431bfcf7f511cbe9bdc0ce78a13b0cb34f
