//
//  rectangle.c
//  week 10
//
//  Created by 김지민 on 2021/11/02.
//

#include <stdio.h>
typedef struct {
    int xpos;
    int ypos;
} Point;

typedef struct {
    Point point1;
    Point point2;
} Rectangle;

void area(Rectangle);
void points(Rectangle);

int main(void){
    Rectangle rectangle={{0,0},{100,100}};
    area(rectangle);
    points(rectangle);
    return 0;
}

void area(Rectangle a){
    printf("The area of rectangle is : %d\n",(a.point2.xpos-a.point1.xpos)*(a.point2.ypos-a.point1.ypos));
}

void points(Rectangle a){
    printf("point1(%d,%d),point2(%d,%d),point3(%d,%d),point4(%d,%d)\n",a.point1.xpos,a.point1.ypos,a.point1.xpos,a.point2.ypos,a.point2.xpos,a.point1.ypos,a.point2.xpos,a.point2.ypos);
}
