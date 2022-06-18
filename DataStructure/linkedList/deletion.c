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

    //delete B 
    nodePointer deletion=B; //remember to free soon. 
    A->link=B->link; // D should not be null. unless, we cannot access link field. 
    free(deletion);
    

    //delete A
    nodePointer deletion=A;
    A=A->link;  // A should not be null. unless, we cannot access link field. 
    free(deletion);
    
    // nodePointer t = A;
    // while(t!=NULL){
    //     printf("word : %s\n",t->word);
    //     t=t->link;
    // }
    printf("couldn't find");
}
