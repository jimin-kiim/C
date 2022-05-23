//
//  5.c
//  3주차
//
//  Created by 김지민 on 2021/09/24.
/*지불할 금액을 정수로 입력받아 화폐단위가 각각 몇개씩 필요한지 출력하는 프로그램을 작성하시오.
Write  a  program  that  takes  the  amount  to  be  paid  as  an  integer  and  outputs  how  many  currency  units  are  needed.
(조건1) 입력은최소천원단위로입력. Input at least in units of 1,000 won
 (조건2) 화폐단위는  50000, 10000, 5000, 1000의  4가지이며, 가능한큰화폐단위로지불. There are 4 types of currency units: 50000, 10000, 5000, 1000, and we will make payment in the largest possible currency unit.
 (조건3) 예를들면, 입력이  236000이면, 50000원권  4개, 10000원권  3개, 5000원권  1개, 1000원권1개. For example, if the input is 236000, we will print 4 50000-won notes, 3 10000-won notes, 1 5000-won notes, 1 1000-won notes
*/
#include <stdio.h>

int main(void) {
    int total=0;
    int fiftythousand=0;
    int tenthousand=0;
    int fivethousand=0;
    int thousand=0;
    
    printf("Input how much you have to pay: ");
    scanf("%d",&total);
    fiftythousand=total/50000;
    total%=50000;
    tenthousand=total/10000;
    total%=10000;
    fivethousand=total/5000;
    total%=5000;
    thousand=total/1000;
    
    printf("50000:%d\n10000:%d\n5000:%d\n1000:%d \n",fiftythousand,tenthousand,fivethousand,thousand);
}

