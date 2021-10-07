//
//  5.c
//  6주차
//
//  Created by 김지민 on 2021/10/07.
//

#include <stdio.h>

char score2grade(float);

int main(void){
    
    float score;
    
    printf("점수를 입력해주세요: ");
    scanf("%f", &score);
    printf("학점: %c\n",score2grade(score));
}

char score2grade(float score) {
    
    if (score>=90)
        return 'A';
    if(score>=80)
        return 'B';
    if(score>=70)
        return 'C';
    if(score>=60)
        return 'D';
    return 'F';
    
    
}
