//
//  4.c
//  6주차
//
//  Created by 김지민 on 2021/10/06.
//

#include <stdio.h>

double add(double, double);
double subtract(double, double);

int main(void) {
    double x,y;
    printf("두 개의 실수를 입력하세요: ");
    scanf("%lf %lf",&x,&y);
    printf("합: %.2lf 차: %.2lf\n", add(x,y),subtract(x,y));
    return 0;
}

double add(double a, double b){
    return a+b;
}

double subtract(double a, double b){
    return a-b;
}
