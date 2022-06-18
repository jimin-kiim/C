#include <stdio.h>
#include <stdlib.h> //for malloc
#include <string.h> //for strcmp

typedef struct node *nodePointer;
typedef struct node {
    char *word;
    nodePointer link;
};

nodePointer A=NULL;

void insert(nodePointer *, nodePointer, char *);

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

    nodePointer insertion_node = (nodePointer)malloc(sizeof(struct node)); 
    insertion_node->word="the";
    insertion_node->link= B->link;
    B->link= insertion_node;
    // TODO-1 맨 뒤
    // TODO-2 맨 앞

    insert(&A,B,"hi");
    insert(&A,A,"inserted");
    nodePointer t = A;
    while(t!=NULL){
        printf("word : %s\n",t->word);
        t=t->link;
    }
}

void insert(nodePointer *first, nodePointer x, char *word){
    nodePointer temp = (nodePointer)malloc(sizeof(struct node));
    temp->word=word;
    if(*first){ //utilise x
        temp->link=x->link;
        x->link=temp;
    }else{ // utilise first. 
        // if the linked list is empty 
        temp->link=NULL;
        *first=temp;
    }
}