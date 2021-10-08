#include "main.h"
#include <limits.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%o\n", 1024);
    _printf("%o\n", -1024);
    _printf("%o\n", 0);
    _printf("%o\n", UINT_MAX);
    _printf("%o\n", UINT_MAX + 1024);
    _printf("There is %o bytes in %o KB\n", 1024, 1);
    _printf("%o - %o = %o\n", 2048, 1024, 1024);
    _printf("%o + %o\n", INT_MAX, INT_MAX);
    return (0);
}
