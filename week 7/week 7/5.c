//
//  5.c
//  week 7
//
//  Created by 김지민 on 2021/10/11.
//

#include <stdio.h>
void delchar(char [], char);

int main() {
    char str[20] ="javajjjaklalakaka";
    char ch = 'a';
    delchar(str,ch);
}

void delchar(char str[], char ch){
    char new[20];
    int i=0;
    while(*str){
        if (*str!=ch)
            new[i++]=*str;
        str++;
    }
    printf("%s\n",new);
}
