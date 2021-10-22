//
//  5.c
//  week 8
//
//  Created by 김지민 on 2021/10/22.
//

#include <stdio.h>
int max(int []);
int min(int []);

int main(){
    int temp;
    int nums[5];
    printf("Enter 5 integers >>");
    for(int i=0; i<5;i++){
        scanf("%d ",&temp);
        nums[i]=temp;
    }
    printf("biggest number: %d\n", max(nums));
    printf("smallest number: %d\n",min(nums));
}

int max(int nums[]){
    int max=nums[0];
    int i=1;
    for(int j=0; j<4;j++){
        if(max<nums[i])
            max=nums[i++];
    }
    return max;
}
int min(int nums[]){
    int min=nums[0];
    int i=0;
    for(int j=0; j<4;j++){
        if(min>nums[i])
            min=nums[i++];
    }
    return min;
}
