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
	/* Initialize loop counter */
	int i = 0;

	/* Loop through the string */
	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	/* Character not found, return NULL */
	return (NULL);
}
