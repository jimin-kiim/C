//
//  euclidean algorithm.c
//  week 9
//
//  Created by 김지민 on 2021/10/29.
//

#include <stdio.h>
int euclidean(int, int);
void swap(int *, int *);

int main(void){
    int a,b;
    
    printf("Enter two positive integers : ");
    scanf("%d %d",&a,&b);
    printf("the greatest common divisor of %d and %d is : %d\n",a,b,euclidean(a,b));
    
    return 0;
}


int euclidean(int a,int b){
    int r;
    if(a<b)
        swap(&a,&b);
    while(b){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

void swap(int *a, int *b){
    int *p;
    p=a;
    a=b;
    b=p;
}
