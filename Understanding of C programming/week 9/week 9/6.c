//
//  6.c
//  week 9
//
//  Created by 김지민 on 2021/10/27.
//

#include <stdio.h>
void add(int, int);
void subtract(int, int);

int main(void){
    int num1,num2;
    char operator;
    
    while(1){
        printf("Enter arithmetic expressions, including numbers and operators : ");
        scanf("%d%c%d",&num1,&operator,&num2);
        
        if(operator=='+'){
            add(num1,num2);
        }else if(operator=='-'){
            subtract(num1,num2);
        }else{
            printf("Not supported operation!");
        }
    }
    
}

void add(int num1, int num2){
    static int count;

    printf("The addition was performed a total of %d times.\n",++count);
    printf("The result of operation is : %d\n",num1+num2);
}

void subtract(int num1, int num2){
    static int count;
    
    printf("The subtraction was performed a total of %d times.\n",++count);
    printf("The result of operation is : %d\n",num1-num2);
}
