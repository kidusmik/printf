#include "main.h"
#include <limits.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%b\n", 1024);
    _printf("%b\n", -1024);
    _printf("%b\n", 0);
    _printf("%b\n", UINT_MAX);
    _printf("%b\n", UINT_MAX + 1024);
    _printf("There is %b bytes in %b KB\n", 1024, 1);
    _printf("%b - %b = %b\n", 2048, 1024, 1024);
    _printf("%b + %b\n", INT_MAX, INT_MAX);
    return (0);
}
