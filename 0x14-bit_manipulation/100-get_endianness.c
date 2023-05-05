#include "main.h"

/**
 * get_endianness - checks if a machine is little or endian
 *
 * Return: 1 for little, 0 for big
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
