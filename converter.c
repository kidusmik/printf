#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
* converter - function to parse the input string
*
* @sp: specifier list
*
* @format: string to be processed
*
* @arg: argument
*
* Return: length if successful, otherwise -1
*/
int converter(specifier sp[], const char *format, va_list arg)
{
	int i, j, k, len;

	len = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; sp[j].spec != NULL; j++)
			{
				if (format[i] == *sp[j].spec)
				{
					k = sp[j].f(arg);
					if (k == -1)
						return (-1);
					len += k;
					break;
				}
			}
			if (sp[j].spec == NULL)
			{
				if (format[i] != '\0')
				{
					print_char('%');
					print_char(format[i]);
					len += 2;
				}
				else
				return (-1);
			}
		}
		else
		{
			print_char(format[i]);
			len++;
		}
	}
	return (len);
}
