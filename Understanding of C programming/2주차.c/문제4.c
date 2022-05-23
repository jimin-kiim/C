//
//  문제4.c
//  2주차.c
//
//  Created by 김지민 on 2021/09/07.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
   char input;
   printf("문자를 하나 입력하세요: ");
   scanf("%c", &input);
   printf("%c\n", input);
   printf("%#o\n", input);
   printf("%d\n", input);
   printf("%#x\n", input);

   return 0;
}
