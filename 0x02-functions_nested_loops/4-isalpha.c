#include "main.h"

/**
 * _isalpha - checks for lower character
 * @c: checks the value
 *
 * Return: returns 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
