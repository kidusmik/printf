#include "main.h"
#include <stdlib.h>
/**
* print_binary- convert decimal to binary
*
* @arg: to store the number of arguments
*
* Return: number of characters to be sent to console
*/
int print_binary(va_list arg)
{
int len;
unsigned int n;
int j;
int i = 1;
int temp;
char *s;
n = va_arg(arg, unsigned int);
len = len_buffer(n, 2);
s = malloc(sizeof(char) * (len + 1));
if (s == 0)
{
return (0);
}
while (n != 0)
{
temp = n % 2;
s[i] = (temp + '0');
i++;
n = n / 2;
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
* print_octal- convert decimal to octal
*
* @arg: to store the number of arguments
*
* Return: number of characters to be sent to console
*/
int print_octal(va_list arg)
{
int len;
unsigned int n;
int i = 1;
int j;
int temp;
char *s;
n = va_arg(arg, unsigned int);
len = len_buffer(n, 8);
s = malloc(sizeof(char) * (len + 1));
if (s == 0)
{
return (0);
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
print_char(s[j]);
}
free(s);
return (len);
}
/**
* print_hex- convert decimal to hexidecimal
*
* @arg: to store the number of arguments
*
* Return: number of characters to be sent to console
*/
int print_hex(va_list arg)
{
int len;
unsigned int n;
int i = 1;
int j;
int temp;
char *s;
n = va_arg(arg, unsigned int);
len = len_buffer(n, 16);
s = malloc(sizeof(char) * (len + 1));
if (s == 0)
{
return (0);
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
print_char(s[j]);
}
free(s);
return (len);
}
/**
* print_HEX- convert decimal to HEXADECIMAL
*
* @arg: to store the number of arguments
*
* Return: number of characters to be sent to console
*/
int print_HEX(va_list arg)
{
unsigned int n;
int j;
int len;
int i = 1;
int temp;
char *s;
n = va_arg(arg, unsigned int);
len = len_buffer(n, 16);
s = malloc(sizeof(char) * (len + 1));
if (s == 0)
{
return (0);
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
print_char(s[j]);
}
free(s);
return (len);
}
