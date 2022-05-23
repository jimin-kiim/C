//
//  2.c
//  week 13
//
//  Created by 김지민 on 2021/12/20.
//

#include <stdio.h>

int main() {
   char* color="silver";
   struct {
       char model[20];
       int year;
       char* color;
   }car={"avante"};
   car.color=color;
   printf("%s %s",car.model ,car.color);
   union goods{
       char name[10];
       int id;
   } tv={"tv",123456};
   printf("%s\n",tv.name);
   printf("%d\n",tv.id);
   int a[][2] = { 2, 4, 2, 1, -1, -2, -4, -2 };
   printf("%d\n", **a );
   printf("%d\n", sizeof(*a)/4 );
   printf("%d\n", *a[1] );
   printf("%d\n", a[0] );

   struct person{
       char name[10];
       int id;
       struct person friend;
   }student;
   student.id=201234;
   printf("%d",student.id);
   enum product {
       TV=-1,
       RADIO,
       PHONE=7
   };
   enum product asset1=RADIO, asset2;
   
   typedef unsigned int UINT32, uint32;
   UINT32* a,b;
   unsigned int *c,d;
   a=&b; c=&d;
   
   return 0;
}
