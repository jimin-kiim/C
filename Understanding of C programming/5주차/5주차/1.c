//
//  main.c
//  5주차
//
//  Created by 김지민 on 2021/09/27.
//

#include <stdio.h>

int main(void) {
   char variable='*';
   char *p=&variable;
   printf("변수의 주소: %p \n변수의 코드 값: %#x \n변수 안에 저장된 문자: %c \n", p, *p, *p);
   
   return 0;
}
