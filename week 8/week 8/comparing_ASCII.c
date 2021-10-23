//
//  comparing_ASCII.c
//  week 8
//
//  Created by 김지민 on 2021/10/24.
//

#include <stdio.h>

int main() {
    char word[50];
    int i=0;
    char max;
    printf("Enter a word >> ");
    scanf("%s",word);
    max=word[0];
    while(word[i]){
        if (max<word[i])
            max=word[i];
        i++;
    }
    printf("%c",max);
    return 0;
}
