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
    char calculation[4][10]={"add","subtract","divide","multiply"};
    char operator[4][2]={"+","-","/","*"};
    char c[10];
    while(1){
        choice=0;
        printf("=========================\n");
        printf("   Simple Calculator\n");
        printf("=========================\n");
        printf("What are you going to do?\n\n");
        printf("1. addition\n2. subtraction\n3. division\n4. multiplication\n5. exit\n\n");
        printf("Enter a number >>");
        scanf("%d",&choice);
        gets(c);
        while((choice!=1&&choice!=2&&choice!=3&&choice!=4&&choice!=5)||c[0]=='.'){
            choice=0;
            printf("Please enter a correct number (1,2,3,4,5) >>");
            scanf("%d",&choice);
            gets(c);
        }
        if(choice==5)
            return 0;
        
        printf("Enter two numbers to %s >>",calculation[choice-1]);
        scanf("%d %d",&a,&b);
        printf("%d %s %d = %d\n",a,operator[choice-1],b,pf[choice-1](a,b));
    }
    
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
