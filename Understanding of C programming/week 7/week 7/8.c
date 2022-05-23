//
//  8.c
//  week 7
//
//  Created by 김지민 on 2021/10/13.
//

#include <stdio.h>
#include <string.h>
int mystrlen(const char *p);
int main() {
    char str[100];
    printf("Enter any string:");
    scanf("%s", str);
    printf("Using mystrlen, '%s' is : %d\n",str, mystrlen(str));
    printf("Using strlen, '%s' is : %d\n",str, strlen(str));
    return 0;
}

int mystrlen(const char *p) {
    int count=0;
    while(*p){
        count++;
        p++;
    }
    return count;
}
