//
//  main.c
//  6주차
//
//  Created by 김지민 on 2021/10/06.
//

#include <stdio.h>
int max3(int num1, int num2, int num3);

int main(void) {
    int num1, num2, num3,result;
    
    printf("세 개의 정수를 입력해 주세요: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    result= max3(num1,num2,num3);
    printf("결과: %d\n",result);
    
    return 0;
}

int max3(int num1, int num2, int num3) {
    int result=0;
    if (num1>num2){
        result=num1;
        if (num1<num3){
            result=num3;
        }
    }else if (num2>num3){
        result=num2;
    }else {
        result=num3;
    }
    return result;
}
