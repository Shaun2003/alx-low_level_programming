#include "main.h"

/**
 * _strcmp - compare pointers to two strings
 * @s1: pointer to first string to be compared
 * @s2: pointer to second string to be compared
 * Return: If str1 < str2
 * negative difference of first unmatched characters
 * If str1 == str2, 0
 * If str1 > str2, positive difference of first unmatched characters
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
