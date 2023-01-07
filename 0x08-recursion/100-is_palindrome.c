#include "main.h"

/**
 * check_string - checks if a string is a palindrome
 * @start: character in a string
 * @end: last character of the string
 * Return: 0 upon fail, 1 upon success
 */

int check_string(char *start, char *end)
{
	if (start >= end)
		return (1);
	if (*start == *end)
		return (check_string(start + 1, end - 1));
	
	return (0);
}

/**
 * _strlen - gives the length of a string
 * @s: string
 * Return: the length of a string s
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + (_strlen(s)));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 * Return: returns 0 upon fail, 1 on success- palindrome
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (check_string(s, (s + len - 1)));
}
