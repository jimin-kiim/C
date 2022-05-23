//
//  8.c
//  week 13
//
//  Created by 김지민 on 2021/12/20.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *f;
    if((f=fopen("6.c","r"))==NULL){
        printf("파일 안 열림");
        exit(1);
    }
    while(1){
        int c=fgetc(f);
        if(feof(f)){
            break;
        }
        fprintf(stdout,"%c",c);
    }
    fclose(f);
    printf("\n");
    return 0;
}
