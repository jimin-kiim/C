//
//  7.c
//  week 9
//
//  Created by 김지민 on 2021/10/27.
//

#include <stdio.h>
int sum(int);

int main(void){
    int n;
    printf("Enter a number less than 1000 : ");
    scanf("%d",&n);
    while(n<=0){
        printf("Please enter positive integer\n");
        printf("Enter a number : ");
        scanf("%d",&n);
    }
    printf("sum: %d\n",sum(n));
    return 0;
}

int sum(int n){
    static int count;
    ++count;
    if(n==1){
        printf("The function is performed %d times.\n",count);
        return 1;
    }else{
        return n+sum(n-1);
    }
   
}
