#include "main.h"
#include <limits.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%X\n", 1024);
    _printf("%X\n", -1024);
    _printf("%X\n", 0);
    _printf("%X\n", UINT_MAX);
    _printf("%X\n", UINT_MAX + 1024);
    _printf("There is %X bytes in %X KB\n", 1024, 1);
    _printf("%X - %X = %X\n", 2048, 1024, 1024);
    _printf("%X + %X\n", INT_MAX, INT_MAX);
    return (0);
}
