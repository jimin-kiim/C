//
//  7.c
//  5주차
//
//  Created by 김지민 on 2021/09/27.
//
//
#include <stdio.h>

int main(void){
   int data[] = {3, 21, 35, 57, 24, 82, 8};
   int size=sizeof(data)/sizeof(data[0]);
   const int inc =10;
   
   printf("배열의 원소 값 출력:\n");
   
   for(int i=0; i<size;i++){
       *(data+i)+=inc;
       printf("%d ",data[i]);
   }
   printf("\n");
   return 0;
}
