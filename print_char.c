#include "main.h"
/**
* print_char- prints character
* @c: variable used
*
* Return: printf to stdout 1 character
*/
int print_char(char c)
{
	return (write(1, &c, 1));
}
