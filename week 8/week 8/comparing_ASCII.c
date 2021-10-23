//
//  comparing_ASCII.c
//  week 8
//
//  Created by 김지민 on 2021/10/24.
//

#include <stdio.h>
char ascii(char []);
int main() {
    char word[50];
    printf("Enter a word >> ");
    scanf("%s",word);
    printf("result: %c\n",ascii(word));
    return 0;
}

char ascii(char word[]){
    int i=0;
    char max=word[0];
    while(word[i]){
        if (max<word[i])
            max=word[i];
        i++;
    }
    return max;
}
