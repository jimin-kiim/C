//
//  combination of alphabets.c
//  week 9
//
//  Created by 김지민 on 2021/10/28.
//

#include <stdio.h>
#include <string.h>
int fact(int );
int main(void){
    char string[50];
    int count[50]={0};
    printf("Enter any words : ");
    scanf("%s",string);
    int size=strlen(string);
    int k=0;
    
    for(int i=0; i<size; i++){
        count[k]=1;
        for(int j=i+1; j<size-i-1; j++){
            if (string[i]==string[j])
                count[k]++;
        }
        k++;
    }
    k=0;
    int result=fact(size);
    printf("%d\n",result);
    while(count[k]){
        printf("count[%d]:%d\n",count[k],k);
        result/=fact(count[k++]);
    }
    
    printf("the number of combinations that can be made by '%s': %d\n",string,result);
    return 0;
}

int fact(int n){
    if(n==2||n==1)
        return n;
    return n*fact(n-1);
    
}
