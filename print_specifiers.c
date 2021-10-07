#include "main.h"
/**
* print_c - print character from arg
*
* @arg: argument
*
* Return: length
*/
int print_c(va_list arg)
{
	int len;

	len = 0;
	print_char(va_arg(arg, int));
	len++;
	return (len);
}
/**
* print_string - prints string
*
* @arg: argument
*
* Return: length
*/
int print_string(va_list arg)
{
	int len;
	char *s;

	s = va_arg(arg, char *);
	if (s == 0)
	{
		s = "(null)";
	}
	len  = 0;
	while (s[len] != '\0')
	{
		print_char(s[len]);
		len++;
	}
	return (len);
}
/**
* print_percent - prints percent sign
*
* @arg: argument
*
* Return: length
*/
int print_percent(va_list __attribute__((__unused__))arg)
{
	int len;

	len = 0;
	print_char('%');
	len++;
	return (len);
}
/**
* print_unsigned - prints unsigned integer
*
* @arg: argument
*
* Return: length
*/
int print_unsigned(va_list arg)
{
	int div;
	int len;
	unsigned int num;

	div = 1;
	len = 0;

	num = va_arg(arg, unsigned int);

	if (num < 1)
		return (-1);

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += print_char('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
/**
* print_integer - prints integer
*
* @arg: argument
*
* Return: length
*/
int print_integer(va_list arg)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n  = va_arg(arg, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += print_char('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += print_char('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
