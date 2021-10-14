//
//  7.c
//  week 7
//
//  Created by 김지민 on 2021/10/12.
//
//
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[] ){
    printf("실행 명령행 인자(command line arguments) >>\n");
    printf("두 수의 합: %d + %d = %d\n",atoi(argv[1]), atoi(argv[2]),atoi(argv[1])+ atoi(argv[2]));
    
    return 0;
}
