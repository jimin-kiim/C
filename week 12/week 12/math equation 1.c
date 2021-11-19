//
//  math equation 1.c
//  week 12
//
//  Created by 김지민 on 2021/11/19.
//

#include <stdio.h>
#include <math.h>

double sigma(int);
double f(int);

int main(void){
    int n;
    printf("Enter a integer >>");
    scanf("%d",&n);
    printf("summation from 1 to n (f^2+f+1): %lf\n",sigma(n));
}

double sigma(int n){
    double sum=0;
    for (int k=1; k<=n; k++){
        sum+=pow(f(k),2)+f(k)+1;
    }
    return sum;
}

double f(int k){
    return cos(k);
}
