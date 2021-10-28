//
//  combination of alphabets.c
//  week 9
//
//  Created by 김지민 on 2021/10/28.
//

#include <stdio.h>
#include <string.h>
int fact(int);

int main(void){
    char input[50];
    char string[50];
    int count[50]={0};
    int i,k,j;
    
    printf("Enter any words : ");
    scanf("%s",input);
    
    int size=strlen(input);
    
    for(i=0; i<size; i++){
        string[i]=input[i];
    }
    string[i]='\0';
    
    k=0;
    i=0;
    while(string[i]){
        count[k]=1;
        j=i+1;
        if(string[i]!='*'){
            while(string[j]){
                if (string[i]==string[j]){
                    count[k]+=1;
                    string[j]='*';
                }
                j++;
            }
        }
        k++;
        i++;
    }
    
    int result=fact(size);
    k=0;
    while(count[k]){
        result/=fact(count[k]);
        k++;
    }
    
    printf("the number of combinations that can be made by '%s': %d\n",input,result);
    return 0;
}

int fact(int n){
    if(n==2||n==1)
        return n;
    return n*fact(n-1);
    
}
