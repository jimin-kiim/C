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
    printf("(mystrcat) 연결된 결과: ");
    mystrcat(s1,s2);
    printf("  (strcat) 연결된 결과: %s\n",strcat(s1,s2));
    
    return 0;
}

void mystrcat(char s1[], char s2[]) {
    int count=0;
    char s3[100];
    int i=0;
    
    while(*s1){
        count++;
        s3[i++]=*s1++;
    }
    while(*s2){
        s3[count++]=*s2++;
    }
    s3[count]='\0';
    printf("%s\n",s3);
}
