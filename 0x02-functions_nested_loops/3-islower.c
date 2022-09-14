#include "main.h"
#include <unistd.h>

/**
 * _islower - checks for lower character
 *
 * Return: returns 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (write(1, &c, 0));
	}
}
