//
//  switch.c
//  week 10
//
//  Created by 김지민 on 2021/11/02.
//

#include <stdio.h>

typedef struct point {
    int xpos;
    int ypos;
}Point;

void switchf(Point*, Point*);

int main(void){
    Point pos1={2,4};
    Point pos2={5,7};
    
    switchf(&pos1, &pos2);
    printf("%d %d\n%d %d",pos1.xpos,pos1.ypos,pos2.xpos,pos2.ypos);
    
    return 0;
}

void switchf(Point *a, Point *b){
    Point temp=*a;
    *a=*b;
    *b=temp;
    
}
