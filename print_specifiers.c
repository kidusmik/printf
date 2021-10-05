#include "main.h"
#include <stdlib.h>
/**
* print_c- prints character
*
* @arg: to store the number of arguments
*
* Return: number of characters to be sent to console
*/
int print_c(va_list arg)
{
int len = 0;
print_char(va_arg(arg, int));
len++;
return (len);
}
/**
* print_string- prints character
*
* @arg: to store the number of arguments
*
* Return: number of characters to be sent to console
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
* print_percent- prints percent
*
* @arg: to store the number of arguments
*
* Return: number of characters to be sent to console
*/
int print_percent(va_list __attribute__((__unused__))arg)
{
int len = 0;
print_char('%');
len++;
return (len);
}
/**
* print_unsigned- prints unsigned integer
*
* @arg: to store the number of arguments
*
* Return: number of characters to be sent to console
*/
int print_unsigned(va_list arg)
{
int j;
int len;
unsigned int n;
int i = 1;
int temp;
char *s;
n = va_arg(arg, unsigned int);
len = len_buffer(n, 10);
s = malloc(sizeof(char) * (len + 1));
if (s == 0)
{
return (0);
}
while (n != 0)
{
temp = n % 10;
s[i] = (temp + '0');
i++;
n = n / 10;
}
s[i] = '\0';
for (j = i - 1; j >= 0; j--)
{
print_char(s[j]);
}
free(s);
return (len);
}
/**
* print_integer- prints an integer positive or negative
*
* @arg: to store the number of arguments
*
* Return: number of characters to be sent to console
*/
int print_integer(va_list arg)
{
int j;
int len;
unsigned int num;
int n;
int i = 1;
int temp;
char *s;
n = va_arg(arg, unsigned int);
len = len_buffer(n, 10);
if (n < 0)
{
print_char('-');
num = n * -1;
}
else
{
num = n;
}
if (n < 0)
s = malloc(sizeof(char) * (len + 2));
else
s = malloc(sizeof(char) * (len + 1));
if (s == 0)
{
return (0);
}
while (num != 0)
{
temp = num % 10;
s[i] = (temp + '0');
i++;
num = num / 10;
}
s[i] = '\0';
for (j = i - 1; j >= 0; j--)
{
print_char(s[j]);
}
return (len);
}
