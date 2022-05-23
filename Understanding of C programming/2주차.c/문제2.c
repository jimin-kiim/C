//
//  문제2.c
//  2주차.c
//
//  Created by 김지민 on 2021/09/07.
//

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
   int num = 0;
   printf("4자리 정수 입력: ");
   scanf("%d", &num);
   printf("%10d\n", num);
   printf("%010d\n", num);
   printf("%+010d\n", num);
   printf("%-10d\n", num);
   printf("%10o\n", num);
   printf("%0#10o\n", num);
   printf("%10x\n", num);
   printf("%0#10x\n", num);
   return 0;
}
