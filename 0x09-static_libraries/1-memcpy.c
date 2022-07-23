#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: dstination memory area
 * @src: source memory area
 * @n: bytes filed
 * Return: the pointer to the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	char *checker;

	checker = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (checker);
}
