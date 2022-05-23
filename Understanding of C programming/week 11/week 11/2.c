//
//  2.c
//  week 11
//
//  Created by 김지민 on 2021/11/21.
//

#include <stdio.h>
#include <stdarg.h>

double vasum(char *, ...);

int main(void)
{
    double result = vasum("dfdf", 3, 20.75412, 51, 21.9012);
    printf("%.2f\n", result);
    return 0;
}

double vasum(char *parm, ...)
{
    va_list my_list;
    va_start(my_list, parm);

    int i = 0;
    double sum_data = 0.0;

    while (*(parm + i))
    {
        switch (*(parm + i++))
        {
        case 'd':
            sum_data += va_arg(my_list, int);
            break;
        case 'f':
            sum_data += va_arg(my_list, double);
            break;
        default:
            break;
        }
    }
    va_end(my_list);

    return sum_data;
}
