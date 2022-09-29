#include "main.h"

/**
* _strlen_recursion - This function outputs the length of string
* @s: string parameter
* Return: returns the length
*/

int _strlen_recursion(char *s)
{
	/* checks for if input character is null */
	if (*s == '\0')
	{
		return (0);
	}
	s++;	/* increment the index */
	return (1 + _strlen_recursion(s));	/* returns the index value + 1 */
}
/**
* Descrition: CALL STACK
* for example if *s = "hi"
* if doesn't satisfy the if statement,
* thus it has one character which is at index 0
* it moves futher to increment the index, where s = 0 + 1
* ...it then returns 1 + function(1)
*
* it checks if s[1] equals the null character
* it doesn't satisfy the conditon, so it moves
* ...and increments the index, where s = 1 + 1
* it then returns 1 + function(2)
* therfore this means that "1 + function(2) = function(1)
* so i can rewrite the return statement as
* it return (1 + 1 + function(2))
*
* it checks again if s[2] equals NULL, YES IT IS!!!
* then it returns 0, then pops out this stack from the stack frame
*
* then moves to the stack below which is
* return (1 + 1 + function(2)), which is now
* return (1 + 1 + 0) == return (2)
* therefore the length of the string is 2.
* yaaay!!!! We got it! Code Ends.
*/
