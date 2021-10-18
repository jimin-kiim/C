//
//  bank.c
//  week 8
//
//  Created by 김지민 on 2021/10/18.
//

#include <stdio.h>
void save(int);
void withdraw(int);

int total=0;

int main() {
    int choice,money;
    printf("deposit   withdrawal   total-deposit   total-withdrawal   balance\n");
    printf("=================================================================\n");
    save(5000);
    save(24000);
    withdraw(3000);
    printf("what are you going to do? 1: desposit 2: withdrawal >>");
    scanf("%d",&choice);
    while (choice!=1&&choice!=2){
        printf("please choose a number between 1 or 2. \n");
        printf("what are you going to do? 1: desposit 2: withdrawal >>");
        scanf("%d",&choice);
    }
    printf("for how much? >>");
    scanf("%d",&money);
    if (choice==1){
        printf("deposit   withdrawal   total-deposit   total-withdrawal   balance\n");
        printf("=================================================================\n");
        save(money);
    }else{
        printf("deposit   withdrawal   total-deposit   total-withdrawal   balance\n");
        printf("=================================================================\n");
        withdraw(money);
    }
    return 0;
}

void save(int money){
    static int amount;
    total+=money;
    amount+=money;
    printf("%7d %28d %28d\n",money, amount, total);
}

void withdraw(int money){
    static int amount;
    total-=money;
    amount+=money;
    printf("%20d %34d %9d\n",money, amount, total);
}
