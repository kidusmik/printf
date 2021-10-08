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
int len_buffer(int n, int base)
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
	int i = 0;
	char *s;
	int len = 0;
	int j;
char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	s = va_arg(arg, char *);
		if (s == NULL)
		{
			return (-1);
		}
		for (i = 0; s[i]; i++)
		{
			for (j = 0; str1[j]; j++)
			{
				if (str1[j] == s[i])
				{
					_putchar(str2[j]);
					len++;
					break;
				}
				if (!str1[j])
					_putchar(s[i]);
			}
		}
		return (len);
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
	while (s[len])
	{
		len++;
	}
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	return (len);
}
