//
//  2.c
//  week 7
//
//  Created by 김지민 on 2021/10/11.
//
//
#include <stdio.h>
#include <string.h>
void mystrcat(char [], char []);

int main() {
    char s1[100] = "C ";
    char s2[50] = "programming language";
    char s3[100]="C ";//when using the function named 'mystrcat', s1 is changed. so I need a new array that contains "C ".
    mystrcat(s1,s2);
    printf("(mystrcat) 연결된 결과: %s\n",s1);
    printf("  (strcat) 연결된 결과: %s\n",strcat(s3,s2));
    
    return 0;
}

void mystrcat(char s1[], char s2[]) {
    int count = strlen(s1);//now I don't need to count the length of the string by myself, just using the function 'strlen'from string.h
    //strlen: the length of the string. sizeof: lengthof the array
    while(*s2){
        s1[count++]=*s2++;
    }
    
    s1[count]='\0';
}
