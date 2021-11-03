//
//  book management.c
//  week 10
//
//  Created by 김지민 on 2021/11/03.
//

#include <stdio.h>
#include <string.h>

typedef struct {
    char title[50];
    char writer[50];
    int pages;
}Book;

Book books[10]={{"C programming", "Tim", 529},{"Java programming", "Karen", 345}};

int main(void){
    strcpy(books[2].title,"Basic Swift");
    strcpy(books[2].writer,"Lian");
    books[2].pages=321;
    
//    for(int i=0; i<3; i++){
//        printf("Please enter data of book%d\n",i+1);
//        printf("title: ");
//        scanf("%s",books[i].title);
//        printf("writer: ");
//        scanf("%s",books[i].writer);
//        printf("the number of pages: ");
//        scanf("%d",&books[i].pages);
//    }
//    
    printf("title             writer    pages\n");
    printf("=================================\n");
    for(int i=0; i<3; i++){
        printf("%-18s%-10s%d\n",books[i].title,books[i].writer,books[i].pages);
    }
    return 0;
}
