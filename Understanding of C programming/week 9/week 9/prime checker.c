//
//  prime checker.c
//  week 9
//
//  Created by 김지민 on 2021/10/28.
//

#include <stdio.h>
#include <math.h>
int primechecker(int);
int main(void){
    int input;
    printf("Enter a positive number : ");
    scanf("%d",&input);
    int divides=primechecker(input);
    if(divides){
        printf("The number %d is a composite.\n",input);
        printf("%d divides %d.\n",divides, input);
    }else{
        printf("The number %d is a prime.\n",input);
    }
    return 0;
}

int primechecker(int num){
    int max=sqrt(num);
    for(int i=2; i<max+1; i++){
        if(!(num%i))
            return i;
    }
    return 0;
}
