//
//  main.c
//  week 11
//
//  Created by 김지민 on 2021/11/17.
//

#include <stdio.h>
void add(double *, double, double);
void sub(double *, double, double);
void mul(double *, double, double);
void divi(double *, double, double);

int main(void) {
    int menu;
    double a,b,result;
    char op[4]={'+', '-', '*', '/'};
    void (*pfary[4])(double *,double,double)={add,sub,mul,divi};
    
    printf("Enter the number for each operation for the four arithmetic operations.\n");
    printf("[Add]: 0, [Subtract]: 1, [Multiply]: 2, [Divide]: 3 >>");
    scanf("%d",&menu);
    if(menu<0||menu>3){
        printf("Wrong number! The program stopped\n");
        return 0;
    }
    printf("Enter two real numbers to perform the arithmetic operation. >> ");
    scanf("%lf %lf",&a,&b);
    printf("Calling function: pfary[%d]\n",menu);
    pfary[menu](&result,a,b);
    printf("result: %lf %c %lf == %lf\n",a,op[menu],b,result);
    return 0;
}

void add(double *c, double a, double b){
    *c= a+b;
}

void sub(double *c, double a, double b){
    *c= a-b;
}

void mul(double *c, double a, double b){
    *c= a*b;
}

void divi(double *c, double a, double b){
    *c= a/b;
}
