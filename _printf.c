#include "main.h"
/**
* _printf- Function that works like printf
* @format: string argument passed to variadic function
*
* Return: Number of characters passed to the console
*/
int _printf(const char *format, ...)
{
	if (format != 0)
	{
		int len = 0;

		specifier sp[] = {
			{"c", print_c},
			{"s", print_string},
			{"%", print_percent},
			{"d", print_integer},
			{"i", print_integer},
			{"x", print_hex},
			{"X", print_HEX},
			{"o", print_octal},
			{"b", print_binary},
			{"u", print_unsigned},
			{NULL, NULL},
		};

		va_list arg;

		va_start(arg, format);
		{
			len += converter(sp, format, arg);
		}

		va_end(arg);

		return (len);
	}

	return (-1);
}