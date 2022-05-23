//
//  5.c
//  week 13
//
//  Created by 김지민 on 2021/12/20.
//

#include <stdio.h>
void set_proverb(char** q, int n);
int main(){
   int choice;
   char **s;
   printf(" Which proverb will you choose?");
   scanf("%d",&choice);
   set_proverb(s,choice);
   printf("selected proverb = %s\n",*s);
   return 0;
}
void set_proverb(char** q, int n){
   static char *array[10] = {
       "A bad shearer never had a good sickle.",
       "A bad workman (always) blames his tools. ",
       "A bad workman quarrels with his tools.",
       "A bad thing never dies.",
       "A bad workman finds fault with his tools.",
       "A bad workman always blames his tools.",
       "A bargain is a bargain.",
       "A barking dog never bites.",
       "A barking dog was never a good hunter."
   };
   *q=array[n];
}
