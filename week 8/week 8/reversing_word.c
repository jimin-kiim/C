//
//  reversing_word.c
//  week 8
//
//  Created by 김지민 on 2021/10/22.
//

#include <stdio.h>
#include <string.h>
void reverse(char [],int);

int main(){
    char word[50];
    int size;
    printf("Enter a word >> ");
    scanf("%s",word);
    size=strlen(word);
    reverse(word,size);
    return 0;
}

void reverse(char word[],int size){
    char result[50];
    int j=0;
    int i=size-1;
    for(; j<size; j++){
        result[j]=word[i--];
    }
    printf("reversed: %s\n",result);
}
