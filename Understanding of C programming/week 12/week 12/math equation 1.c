//
//  math equation 1.c
//  week 12
//
//  Created by 김지민 on 2021/11/19.
//

#include <stdio.h>
#include <math.h>

double sigma(double (*pf)(int),int);
double f1(int);
double f2(int);

int main(void){
    int n;
    printf("Enter a integer >>");
    scanf("%d",&n);
    printf("summation from 1 to n (f^2+f+1) where f=cos(x): %lf\n",sigma(f1,n));
    printf("summation from 1 to n (f^2+f+1) where f=1/x: %lf\n",sigma(f2,n));
}

double sigma(double (*pf)(int), int n){
    double sum=0;
    for (int k=1; k<=n; k++){
        sum+=pow(pf(k),2)+pf(k)+1;
    }
    return sum;
}

double f1(int k){
    return cos(k);
}

double f2(int k){
    return 1/k;
}
