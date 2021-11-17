//
//  main.c
//  week 12
//
//  Created by 김지민 on 2021/11/17.
//

#include <stdio.h>
int addition(int,int);
int subtraction(int,int);
int division(int,int);
int multiplication(int,int);

int main(void) {
    int choice,a,b;
    int (*pf[5])(int,int)={addition,subtraction,division,multiplication};
    char calculation[4][15]={"addition","subtraction","division","multiplication"};
    printf("=================\n");
    printf("Simple Calculator\n");
    printf("=================\n");
    printf("What are you going to do?\n");
    printf("1. addition\n2. subtraction\n3. division\n4. multiplication\n5.exit\n");
    printf("Enter a number >>");
    scanf("%d",&choice);
    printf("Enter two numbers to %s >>",calculation[choice-1]);
    scanf("%d %d",&a,&b);
    printf("result: %d",pf[choice-1](a,b));
    return 0;
}

int addition(int a,int b){
    return a+b;
}
int subtraction(int a,int b){
    return a-b;
}
int division(int a,int b){
    return a/b;
}
int multiplication(int a,int b){
    return a*b;
}