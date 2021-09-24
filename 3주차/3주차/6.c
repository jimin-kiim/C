//
//  6.c
//  3주차
//
//  Created by 김지민 on 2021/09/15.
//
//
#include <stdio.h>

int main(void) {
    float num1=0, num2=0;
    int cal=0;
    int exception=3;
    
    do{
        printf("Two real numbers : ");
        exception= scanf("%f %f",&num1, &num2);
        fflush(stdin);
    }while(exception!=2);
    
    
    do {
        printf("Select sum or subtraction 1(+), 2(-) : ");
        scanf("%d",&cal);
    }while (cal!=1&&cal!=2);
    
    
    switch (cal) {
        case 1:
            printf("%.2f + %.2f = %.2f\n",num1,num2,num1+num2);
            break;
        case 2:
            printf("%.2f - %.2f = %.2f\n",num1,num2,num1-num2);
            break;
        default:
            printf("Not supported operation");
            break;
    }
    return 0;
}
