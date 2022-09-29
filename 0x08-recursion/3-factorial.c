#include "main.h"

/**
* factorial - gets the factorial of a number
* @n: integer
* Return: returns the factorial
*/

int factorial(int n)
{
	/* checks if input is less than 0, then returns error */
	if (n < 0)
	{
		return (-1);
	}
	/* checks if input == 1, then returns 1 as a result */
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
	/**
	* CALL STACK
	* if n = 3
	* the first two if statements aren't satisfied,
	* so it returns (n * function(n - 1)), which is
	* return (3 * function(2))
	*
	* function(2) is called now,
	* it still didn't satify the conditions
	* therefore it returns (n * function(n - 1)), which is
	* return (2 * function(1))
	* on the stack frame we have...
	* return (3 * 2 * function(1))
	*
	* function(1) is called now
	* it meets a condition that returns (1)
	* we now have...
	* return (3 * 2 * 1), on the stack frame.
	* we simple get 6 as the output.
	*/

