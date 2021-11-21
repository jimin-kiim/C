#include <stdio.h>
#include <string.h>
#include <stdarg.h>
double vafunc(char *type, int count, ...);

int main(void)
{
    printf("Average %.2f\n", vafunc("d", 5, 172, 21, 36, 43, 58));
    printf("Average %.2f\n", vafunc("f", 5, 5.8, 17.3, 2.8, 31.8, 45.9, 5.9));
    return 0;
}

double vafunc(char *type, int count, ...)
{
    double total = 0;
    va_list argp;
    va_start(argp, type);
    if (*type == 'd')
    {
        for (int i = 0; i < count; i++)
        {
            total += va_arg(argp, int);
        }
    }
    else
    {
        for (int i = 0; i < count; i++)
        {
            total += va_arg(argp, double);
        }
    }
    va_end(argp);
    return total / count;
}
