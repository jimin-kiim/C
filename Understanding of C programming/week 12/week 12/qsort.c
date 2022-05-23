//
//  qsort.c
//  week 12
//
//  Created by 김지민 on 2021/11/19.
//

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return(*(int*)a-*(int*)b);
}

int main(void){
    int arr[]={98, 23, 76, 99, 16};
    
    int size=sizeof(arr)/sizeof(arr[0]);
    qsort(arr,size,sizeof(arr[0]),compare);
    printf("sorted array:\n");
    for(int i=0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
