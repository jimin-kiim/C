//
//  5.c
//  week 7
//
//  Created by 김지민 on 2021/10/11.
//
//
#include <stdio.h>
#include <string.h>
void delchar(char [], char);

int main() {
    char str[20] ="javajjjaklalakaka";
    char ch = 'a';
    printf("원 문자열: %s\n",str);
    delchar(str,ch);
    printf("delchar() 호출 이후 결과: %s\n",str);
    return 0;
}

void delchar(char str[], char ch){
    char new[20];
    int i,j=0;
    for (i=0; i<strlen(str); j++){
        if (str[j]!=ch)
            new[i++]=str[j];
    }
    new[i]='\0';
    strcpy(str,new);
}
