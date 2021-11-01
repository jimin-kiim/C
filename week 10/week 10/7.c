//
//  main.c
//  week 10
//
//  Created by 김지민 on 2021/11/01.
//

#include <stdio.h>

int main(void) {
    struct date {
        int year;
        int month;
        int day;
    };
    
    struct person {
        char name[50];
        char phonenumber[20];
        struct date date;
    };
    
    struct person people[3] = {
        {"James","010-1111-1111",{1998,1,7}},
        {"Tony", "010-2222-2222",{2000,5, 15}},{"Harry","010-3333-3333",{1999, 11, 17}}
        
    };
    printf("Name     Phone           Birthday\n");
    printf("------------------------------------\n");
    for(int i=0; i<3; i++){
        printf("%-8s%-17s%d.%d.%d\n",people[i].name,people[i].phonenumber,people[i].date.year,people[i].date.month,people[i].date.day);
    }
    return 0;
}
