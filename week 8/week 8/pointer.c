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
    for(int i=0;i<5; i++){
        *(ptr+i)+=2;
        printf("%d \n",arr[i]);
    }
    return 0;
}
