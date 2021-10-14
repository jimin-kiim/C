//
//  6.c
//  week 7
//
//  Created by 김지민 on 2021/10/11.
//
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    char input[]="0";
    int num=0;
    
    printf("정수를 입력하세요: ");
    scanf("%s",input);
    
    for (int i=0; i<strlen(input); i++){
        num+=(input[strlen(input)-i-1]-'0')*pow(10,i);
    }
    printf("정수로 변환한 결과: %d\n",num);
    printf("atoi 함수 이용 결과: %d\n",atoi(input));
    
    return 0;
}
