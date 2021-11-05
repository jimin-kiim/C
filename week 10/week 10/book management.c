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

int findindex(Book []);
void add(int);
void delete(int);

int main(void){
    int input;
    
    strcpy(books[2].title,"Basic Swift");
    strcpy(books[2].writer,"Lian");
    books[2].pages=321;
    
    printf("title             writer    pages\n");
    printf("=================================\n");
    for(int i=0; i<3; i++){
        printf("%-18s%-10s%d\n",books[i].title,books[i].writer,books[i].pages);
    }
    
    while(1){
        printf("What are you going to do?\n");
        printf("1 : Add a new book, 2 : Delete a book, 3: Find a book, 4: exit >>");
        scanf("%d",&input);
        int i=findindex(books);
        switch(input){
            case(1):
                add(i);
                break;
            case(2):
                printf("Which book do you want to delete?");
                scanf("%d",&input);
                delete(input);
                break;
            case(4):
                return 0;
        }
        printf("title             writer    pages\n");
        printf("=================================\n");
        i=findindex(books);
        for(int j=0; j<=i; j++){
            printf("%-18s%-10s%d\n",books[j].title,books[j].writer,books[j].pages);
        }
    }
}

int findindex(Book a[]){
    int i=0;
    while(*a[i].title){
        i++;
    }
    return i;
}

void add(int i){
    printf("Please enter data of book\n");
    printf("title: ");
    scanf("%s",books[i].title);
    printf("writer: ");
    scanf("%s",books[i].writer);
    printf("the number of pages: ");
    scanf("%d",&books[i].pages);
}

void delete(int i){
    strcpy(books[i].title,"\0");
    strcpy(books[i].writer,"\0");
    books[i].pages=0;
}
