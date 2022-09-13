#include <stdio.h>

int _putchar()
{
	char alpha[8] = "_putchar";
	int num;

	for (num = 0; num < 8; num++)
	{
		putchar(alpha[num]);
	}
	putchar('\n');
	return (0);
}
