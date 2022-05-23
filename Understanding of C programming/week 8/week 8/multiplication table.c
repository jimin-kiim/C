//
//  multiplication table.c
//  week 8
//
//  Created by 김지민 on 2021/10/25.
//

#include <stdio.h>

int main(void){
    int array[3][9];
    printf("   1  2  3  4  5  6  7  8  9 \n");
    for(int i=0; i<3; i++){
        printf("%d ",i+2);
        for(int j=0; j<9; j++){
            array[i][j]=(i+2)*(j+1);
            printf("%2d ",array[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
