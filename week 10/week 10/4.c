//
//  4.c
//  week 10
//
//  Created by 김지민 on 2021/11/01.
//

#include <stdio.h>

int main(void){
    struct fraction{
        int numerator;
        int denominator;
    }fraction1, fraction2;
    
    float result1, result2;
    
    printf("Enter two integers : ");
    scanf("%d %d",&fraction1.numerator,&fraction1.denominator);
    result1=fraction1.numerator/fraction1.denominator;
    printf("fraction : %lf\n",result1);
    printf("Enter two integers : ");
    scanf("%d %d",&fraction2.numerator,&fraction2.denominator);
    result2=fraction2.numerator/fraction2.denominator;
    printf("fraction : %lf\n",result2);
    
    return 0;
}
