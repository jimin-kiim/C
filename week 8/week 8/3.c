//
//  3.c
//  week 8
//
//  Created by 김지민 on 2021/10/21.
//

#include <stdio.h>

int main(){
    int temp, i=0, j=9;
    int array[10];
    
    printf("Enter ten integers >> ");
    
    for(int k=0; k<10; k++){
        scanf("%d",&temp);
        if(!(temp%2)){
            array[j--]=temp;
        }else{
            array[i++]=temp;
        }
    }
    printf("Printing the elements of array...\n");
    for(i=0;i<10;i++){
        printf("%d ",array[i]);
    }
    return 0;
}
