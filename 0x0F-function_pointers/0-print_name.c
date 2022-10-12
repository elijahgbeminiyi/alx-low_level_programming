#include "main.h"

/**
* print_name - function prints a name
* @name: string parameter
* @f: another parameter
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
