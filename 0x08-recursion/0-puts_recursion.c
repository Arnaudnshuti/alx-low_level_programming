#include <stdio.h>
/**
 * function to print a string
 *  and a new line
 *  */
void _puts_recursion(char *s)

{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	
	else  
		
		putchar('\n');
}

