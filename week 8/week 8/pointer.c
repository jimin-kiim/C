//
//  pointer.c
//  week 8
//
//  Created by 김지민 on 2021/10/24.
//

#include <stdio.h>

int main(){
    int arr[5]={1,2,3,4,5};
    int *ptr=&arr;
    int i=0,sum=0;
    for(i=0;i<5; i++){
        *(ptr+i)+=2;
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(; i>0; i--)
        sum+=*ptr++;

    printf("sum: %d\n",sum);
    return 0;
}
