//
//  7.c
//  week 7
//
//  Created by 김지민 on 2021/10/12.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[] ){
    int i = 0;
    printf("실행 명령행 인자(command line arguments) >>\n");
    printf("argc = %d\n", argc);
    for (i = 0; i < argc; i++)
           printf("argv[%d] = %s\n", i, argv[i]);
    printf("%d+ %d=%d",atoi(argv[1]), atoi(argv[2]),atoi(argv[1])+ atoi(argv[2]));
    return 0;
}
