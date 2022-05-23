//
//  6.c
//  week 13
//
//  Created by 김지민 on 2021/12/20.
//

#include <stdio.h>
int get_sum(int [], int);
int main(){
   int m[][3]={1,2,3,4,5,6,7,8,9};
   int sum[3];
   int total=0;
   for(int i=0; i<3; i++){
       sum[i]=get_sum(m[i],3);
       total+=sum[i];
   }
   printf("sum of integers = %d\n",total);
   return 0;
}

int get_sum(int array[], int size) {
   int sum=0;
   for (int i=0; i<size; i++){
       sum+=array[i];
   }
   return sum;
}

