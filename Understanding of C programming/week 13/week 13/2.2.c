//
//  2.2.c
//  week 13
//
//  Created by 김지민 on 2021/12/20.


#include <stdio.h>
int main(){
   int m[3][2] = { 1, 2, 3, 4, 5, 6 };
   printf("%d\n", **m);
   printf("%d\n", *m[1]);
   return 0;
}
