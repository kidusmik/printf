#include "main.h"
/**
* len_buffer- determintes the length of a buffer
* @n: number inputed
* @base: the base of the function
*
* Return: length of the output
*/
int len_buffer(int n, int base)
{
	int len;

	len = 0;

	while (n != 0)
	{
		n = n / base;
		len++;
	}
	return (len);
}
