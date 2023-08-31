#include <main.h>
/**
 * factorial -return the  factorial of n
 *@n:number of intigers
 *
 * Return: Always factorial n.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
return (0);
return (n * factorial(n - 1));

}
