//
//  2.c
//  6주차
//
//  Created by 김지민 on 2021/10/06.
//
//
#include <stdio.h>

int fibo(int);

int main(void){
    for(int i=1;i<=10;i++)
        printf("%d ",fibo(i));
    
    return 0;
}

int fibo(int count) {
    if (count<=2)
        return 1;
    else
        return fibo(count-1)+fibo(count-2);
}
