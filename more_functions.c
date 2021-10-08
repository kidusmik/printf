#include "main.h"
#include <stdarg.h>
/**
* len_buffer- determintes the length of a buffer
*
* @n: number inputed
*
* @base: the base of the function
*
* Return: length of the output
*/
int len_buffer(unsigned int n, int base)
{
	int len = 0;

	while (n != 0)
	{
		n = n / base;
		len++;
	}
	return (len);
}
/**
* print_rot- prints rot13
*
* @arg: store the number of arguments
*
* Return: Length of string
*/
int print_rot(va_list arg)
{
	int i;
	char *s;
	int j;
char str1[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
		'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
		'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
		's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char str2[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
		'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't',
		'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e',
		'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};
	s = va_arg(arg, char *);
		if (s == NULL)
		{
			return (-1);
		}
		for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; j < 52; j++)
			{
				if (s[i] == str1[j])
				{
					_putchar(str2[j]);
					break;
				}
			}
			if (!str1[j])
				_putchar(s[i]);
		}
		return (i);
}
/**
* print_rev- to reverse a string
*
* @arg: to store the number of arguments
*
* Return: length of string
*/
int print_rev(va_list arg)
{
	int len;
	int j;
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		s = "(null)";
	}
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	return (len);
}
