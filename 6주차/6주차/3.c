//
//  3.c
//  6주차
//
//  Created by 김지민 on 2021/10/06.
//

#include <stdio.h>
double sum_ary(double [],int);

int main(void) {
    double degree[] = { -5.34, 3.67, 19.76, 28.76, 35.63 };
    int size = sizeof(degree) / sizeof(degree[0]);
    printf("배열원소값을출력\n");
    printf("sum = %.2lf\n", sum_ary(degree,size));
    
    return 0;
}

double sum_ary(double ary[], int size) {
    double sum = 0;
   
    for(int i = 0; i < size; i++){
        sum += ary[i];
    }
    
    return sum;
}
