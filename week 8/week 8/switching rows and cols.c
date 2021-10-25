//
//  switching rows and cols.c
//  week 8
//
//  Created by 김지민 on 2021/10/25.
//

#include <stdio.h>

int main(void){
    int a[2][4]={1,2,3,4,5,6,7,8};
    int b[4][2];
    for(int i=0;i<4; i++){
        for(int j=0; j<2; j++){
            b[i][j]=a[j][i];
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
