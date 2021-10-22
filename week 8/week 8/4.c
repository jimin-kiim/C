//
//  4.c
//  week 8
//
//  Created by 김지민 on 2021/10/21.
//

#include <stdio.h>
#include <string.h>
int palindrome(char [],int);
int main(){
    char word[50];
    int size;
    printf("Enter a word >> ");
    scanf("%s",word);
    printf("result: ");
    size=strlen(word);
    palindrome(word,size);
    return 0;
}

int palindrome(char word[],int size){
    int i=0, j=size-1;
    while(i<j-1){
        if(word[i++]!=word[j--]){
            printf("회문이 아닙니다.\n");
            return 0;
        }
    }
    printf("회문입니다.\n");
    return 0;
}
