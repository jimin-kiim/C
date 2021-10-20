//
//  1.c
//  week 8
//
//  Created by 김지민 on 2021/10/20.
//

#include <stdio.h>
void print_odd(int []);
void print_even(int []);

int main(){
    int array[10];
    int temp;
    printf("Enter 10 integers >>");
    for (int i=0; i<10; i++){
        scanf("%d",&temp);
        array[i]=temp;
    }
    print_odd(array);
    print_even(array);
    return 0;
}

void print_odd(int array[]){
    printf("odd numbers:");
    for(int i=0; i<10; i++){
        if (array[i]%2)
            printf(", %d",array[i]);
    }
    printf("\n");
}
void print_even(int array[]){
    printf("even numbers:");
    for(int i=0; i<10; i++){
        if (!(array[i]%2))
            printf(", %d",array[i]);
    }
    printf("\n");
}
