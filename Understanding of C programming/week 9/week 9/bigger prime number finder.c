//
//  bigger prime number finder.c
//  week 9
//
//  Created by 김지민 on 2021/10/30.
//

#include <stdio.h>
int finder(int);
int main(void){
    int input;
    printf("Enter a prime number less than 100: ");
    scanf("%d",&input);
    printf("bigger prime number is found. %d\n",finder(input));
    return 0;
}

int finder(int num){
    int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    int i=0;
    while(num>=prime[i]){
        i++;
    }
    int index=i;
    int result=1;
    for(i=0; i<index; i++){
        result*=prime[i];
    }
    return result+1;
}
