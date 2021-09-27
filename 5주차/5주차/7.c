//
//  7.c
//  5주차
//
//  Created by 김지민 on 2021/09/27.
//

#include <stdio.h>

int main(void){
    int data[] = {3, 21, 35, 57, 24, 82, 8};
    
    for(int i=0; i<sizeof(data)/4;i++){
        *(data+i)+=10;
        printf("%d\n",data[i]);
    }
    
    return 0;
}
