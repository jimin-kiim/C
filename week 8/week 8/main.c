//
//  main.c
//  week 8
//
//  Created by 김지민 on 2021/10/18.
//

#include <stdio.h>
int count;
void fibonacci(int, int);

int main(int argc, const char * argv[]) {
    int prev=0;
    int num=1;
    printf("피보나치를 몇 개를 구할까요?(3 이상)>>\n");
    scanf("%d",&count);
    if (count<2)
        return 0;
    printf("1 ");
    fibonacci(prev, num);
    printf("\n");
}

void fibonacci(int prev, int num){
    static int i=1;
    while(i++<count){
        int next=prev+num;
        printf("%d ",next);
        fibonacci(num,next);
    }
}
