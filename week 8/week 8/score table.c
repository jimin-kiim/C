//
//  score table.c
//  week 8
//
//  Created by 김지민 on 2021/10/26.
//

#include <stdio.h>

int main(void){
    int score[5][5];
    int sum,i,j=0;
    for(i=0;i<4;i++){
        j=0;
        printf("0%d\n",i+1);
        printf("KOR: ");
        scanf("%d",&score[i][j++]);
        printf("ENG: ");
        scanf("%d",&score[i][j++]);
        printf("MAT: ");
        scanf("%d",&score[i][j++]);
        printf("SCI: ");
        scanf("%d",&score[i][j++]);
    }
    
    printf("    KOR ENG MAT SCI TOTAL\n");
    for(i=0; i<4; i++){
        printf("0%d  ",i+1);
        sum=0;
        for(j=0; j<4; j++){
            printf("%2d  ",score[i][j]);
            sum+=score[i][j];
        }
        score[i][4]=sum;
        printf("%3d",score[i][4]);
        printf("\n");
    }
    printf("sum ");
    for(i=0; i<4; i++){
        sum=0;
        for(j=0;j<4;j++){
            sum+=score[j][i];
        }
        printf("%3d ",sum);
    }
    printf("\n");
    return 0;
}
