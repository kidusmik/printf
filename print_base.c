#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
* print_binary - convert decimal to binary
*
* @arg: to store the number of arguments
*
* Return: number of characters to be sent to console
*/
int print_binary(va_list arg)
{
	int len, j, temp;
	unsigned int n;
	char *s;

	n = va_arg(arg, unsigned int);

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	len = len_buffer(n, 2);
	s = malloc(sizeof(int) * (len));
	while (n != 0)
	{
		temp = n % 2;
		s[len] = (temp + '0');
		len++;
		n = n / 2;
	}
	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	free(s);
	return (len);
}
/**
* print_octal - convert decimal to octal
* @arg: to store the number of arguments
*
* Return: number of characters to be sent to console
*/
int print_octal(va_list arg)
{
	int len, i, j, temp;
	unsigned int n;
	char *s;

	i = 1;
	n = va_arg(arg, unsigned int);

	if (n == 0)
		return (_putchar('0'));
	if (n < 1)
		return (-1);

	len = len_buffer(n, 8);
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
	{
		return (-1);
	}
	while (n != 0)
	{
	temp = n % 8;
	s[i] = (temp + '0');
	i++;
	n = n / 8;
	}
	s[i] = '\0';
	for (j = i - 1; j >= 0; j--)
	{
	_putchar(s[j]);
	}
	free(s);
	return (len);
}
/**
* print_hex - convert decimal to hexidecimal
* @arg: to store the number of arguments
*
* Return: number of characters to be sent to console
*/
int print_hex(va_list arg)
{
	int len, i, j, temp;
	char *s;
	unsigned int n;

	i = 1;
	n = va_arg(arg, unsigned int);

	if (n == 0)
		return (_putchar('0'));
	if (n < 1)
		return (-1);

	len = len_buffer(n, 16);
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
	{
		return (-1);
	}
	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
		{
			temp = temp + 48;
		}
		else
		{
			temp = temp + 87;
		}
		s[i] = temp;
		i++;
		n = n / 16;
	}
	s[i] = '\0';
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	free(s);
	return (len);
}
/**
* print_HEX - convert decimal to HEXADECIMAL
* @arg: to store the number of arguments
*
* Return: number of characters to be sent to console
*/
int print_HEX(va_list arg)
{
	unsigned int n;
	int j, len, temp, i;
	char *s;

	i = 1;
	n = va_arg(arg, unsigned int);

	if (n == 0)
		return (_putchar('0'));
	if (n < 1)
		return (-1);

	len = len_buffer(n, 16);
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
	{
		return (-1);
	}
	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
		{
			temp = temp + 48;
		}
		else
		{
			temp = temp + 55;
		}
		s[i] = temp;
		i++;
		n = n / 16;
	}
	s[i] = '\0';
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	free(s);
	return (len);
}
