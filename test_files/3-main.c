#include "main.h"
#include <limits.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%x\n", 1024);
    _printf("%x\n", -1024);
    _printf("%x\n", 0);
    _printf("%x\n", UINT_MAX);
    _printf("%x\n", UINT_MAX + 1024);
    _printf("There is %x bytes in %x KB\n", 1024, 1);
    _printf("%x - %x = %x\n", 2048, 1024, 1024);
    _printf("%x + %x\n", INT_MAX, INT_MAX);
    return (0);
}
