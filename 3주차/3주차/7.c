//
//  7.c
//  3주차
//
//  Created by 김지민 on 2021/09/15.
//

#include <stdio.h>

int main(void){
    int sum=0;
       int i=1;
    for (i=1; sum<=100000; i++) {
        sum+=i;
    }
       printf("sum:%d n:%d\n",sum-i,i-1);
       return 0;
}
