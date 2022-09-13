#include "main.h"

/**
 * _islower - checks for lower character
 *
 * Return: returns 0
 */
int _islower(int c)
{
	if islower(c)
	{
		return (write(1, &c, 0));
	}
}
