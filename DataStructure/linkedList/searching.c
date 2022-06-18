#include <stdio.h>
#include <stdlib.h> //for malloc
#include <string.h> //for strcmp

typedef struct node *nodePointer;
typedef struct node {
    char *word;
    nodePointer link;
};

nodePointer A=NULL;

int main(int argc, const char * argv[]){
    A=(nodePointer)malloc(sizeof(*A)); 
    A->word = "the";

    nodePointer B = (nodePointer)malloc(sizeof(struct node)); 
    B->word = "lord";
    A->link = B;

    nodePointer C = (nodePointer)malloc(sizeof(struct node)); 
    C->word = "of";
    B->link = C;

    nodePointer D = (nodePointer)malloc(sizeof(struct node)); 
    D->word="rings";
    C->link= NULL;

# if 0 // using while loop
    nodePointer t = A;
    while(t!=NULL){
        if(strcmp(t->word,"of")==0){
            printf("found!");
            return 0 ;
        }
        t=t->link;
    }
# else // using for loop
    for (nodePointer t = A; t!=NULL; t=t->link){
        if(strcmp(t->word,"of")==0){
            printf("found!");
            return 0;
        }
    }
# endif
    printf("couldn't find");
}
