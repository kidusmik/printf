#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
*
*
*
*
*
*
*
*
*/
int converter(specifier sp[], const char *format, va_list arg)
{
int i;
int j;
int k;
int len = 0;
for (i = 0; format[i] !='\0'; i++)
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
{
return (-1);
}
len += k;
break;
}
if (sp[j].spec == NULL && format[i] != ' ')
{
if (format[i] != '\0')
{
print_char('%');
print_char(format[i]);
len += 2;
}
return (-1);
}
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
