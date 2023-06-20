#include "main.h"

/**
 * _strncpy - copies at most an inputted num
 * of bytes from string src into dest
 * @dest: buffer storing the string copy
 * @src: source string
 * @n: max num of bytes to copied from src
 *
 * Return: pointer to resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index = src_len; index < n; index++)
	dest[index] = '\0';

	return (dest);
}
