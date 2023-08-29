#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: String to calculate the length of.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
