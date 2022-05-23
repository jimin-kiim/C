//
//  main.c
//  week 13
//
//  Created by 김지민 on 2021/12/20.
//
//
#include <stdio.h>

int main(int argc, const char * argv[]) {
   int i = 80;
   int* p = &i;
   int** dp = &p;
   **dp = 90;
   *p = 100;
   printf("%d %d %d", i, *p, **dp);
   
   return 0;
}
