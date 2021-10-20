//
//  2.c
//  week 8
//
//  Created by 김지민 on 2021/10/21.
//

#include <stdio.h>
void dtob(int);
int main(){
    int input;
    printf("Enter a decimal number >> ");
    scanf("%d",&input);
    printf("decimal into binary: ");
    dtob(input);
    return 0;
}

void dtob(int num){
    int array[50];
    int i=0;
    while(num>1){
        array[i++]=num%2;
        num=(num-num%2)/2;
    }
    array[i]=1;
    for(;i>=0;i--){
        printf("%d",array[i]);
    }
    printf("\n");
}
