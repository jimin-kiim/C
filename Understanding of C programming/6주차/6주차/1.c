//
//  main.c
//  6주차
//
//  Created by 김지민 on 2021/10/06.
//

#include <stdio.h>

int max3(int, int, int);

int main(void) {
    int num1, num2, num3, result;
    
    printf("세 개의 정수를 입력해 주세요: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    result= max3(num1,num2,num3);
    printf("결과: %d\n",result);
    
    return 0;
}

int max3(int a, int b, int c) {
    int result=a;
    if(result<b) result=b;
    if(result<c) result=c;
    
    return result;
}
