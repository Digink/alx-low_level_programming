#include "main.h"

/**
 * _strchr - Locate a character in a string
 * @s: The string to search
 * @c: The character to locate
 *
 * Return: Pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');

}
