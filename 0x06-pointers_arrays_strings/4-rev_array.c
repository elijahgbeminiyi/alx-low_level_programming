#include "main.h"

/**
* reverse_array - This function reverses an array of integers
* @a: array a of integers
* @n: length of array
*/

void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	/* Let's assume a = [1, 2, 3, 4] */
	p = a;	/* Assigning the address of the first element to  p */

	for (i = 0; i < n; i++)	/* Looping through the lenght of the array */
	{
		p++;
	}
	/* At this point, p holds the address of the last element */

	for (k = 0; k < n / 2; k++)
	{
		aux = a[k];	/* Creating an auxiliary array with the value of a[0],i.e aux=[1] */
		a[k] = *p;	/* ...then, the first element a[0] now holds the value of the last element */
		*p = aux;	/* ...the value of the last element is now assigned to the aux array */
		p--;		/*...the address is decremented, hence the swap is made*/
	}
}
