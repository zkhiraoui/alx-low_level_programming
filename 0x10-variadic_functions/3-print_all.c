#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - print anything
 * @format: list of types of arguments
 *
 */
void print_all(const char * const format, ...)
{
    va_list args;
    int i = 0;
    char *str;
    char flag = 0;

    va_start(args, format);
    while (format && format[i])
    {
        flag = 1;
        switch (format[i++])
        {
            case 'c':
                printf("%c", va_arg(args, int));
                break;
            case 'i':
                printf("%d", va_arg(args, int));
                break;
            case 'f':
                printf("%f", va_arg(args, double));
                break;
            case 's':
                str = va_arg(args, char*);
                if (!str)
                {
                    printf("(nil)");
                    break;
                }
                printf("%s", str);
                break;
            default:
                flag = 0;
                break;
        }
        if (format[i] && flag)
            printf(", ");
    }
    printf("\n");
    va_end(args);
}
