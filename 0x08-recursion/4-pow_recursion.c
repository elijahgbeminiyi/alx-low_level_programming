#include "main.h"

/**
* _pow_recursion -> power using recursion
* @x: the integer param
* @y: the power param
* Return: power result
*/
int _pow_recursion(int x, int y)
{
	/* check if power is less than 0, then returns error */
	if (y < 0)
	{
		return (-1);
	}
	/* checks if the power equals 0, then returns 1 */
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
/**
* CALL STACK
* if x = 2, y = 3
* on first intances, y doesn't satisfy any of the conditions
* it will therefore return (x * function(x, (y - 1))
* ...returns 2 * function(2, 2)
*
* function calls function(2, 2)
* parameters doesn't meet instances,
* it will therefore return (x * function(x, (y - 1))
* ...returns 2 * function(2, 1)
* on the stack frame we have...
* return(2 * 2 * function(2, 1))
*
* function(2, 1) is called
* parameters doesn't meet instances,
* it will therefore return (x * function(x, (y - 1))
* ...returns 2 * function(2, 0)
* on the stack frame we have...
* return(2 * 2 * 2 * function(2, 0))
*
* function(2, 0) is called
* parameters satifies a condition that returns 1
* ...returns 1 and pops out of the function
* we now have return(2 * 2 * 2 * function(2, 0))
* stack frame codes are now being executed automatically
* we now have return(2 * 2 * 2 * 1)
* ...which will simply return(6)
* Boom! Our code is perfect!
*/
