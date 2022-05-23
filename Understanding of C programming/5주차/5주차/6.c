//
//  6.c
//  5주차
//
//  Created by 김지민 on 2021/09/27.
//
//
#include <stdio.h>

int main(void){
   float score;
   printf("점수를 입력해주세요: ");
   scanf("%f",&score);
   
   if (score>=90){
       printf("학점: A\n");
   }else if(score>=80){
       printf("학점: B\n");
   }else if(score>=70){
       printf("학점: C\n");
   }else if(score>=60){
       printf("학점: D\n");
   }else{
       printf("학점: F\n");
   }
   return 0;
}
