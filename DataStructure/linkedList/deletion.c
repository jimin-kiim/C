#include <stdio.h>
#include <stdlib.h> //for malloc
#include <string.h> //for strcmp

typedef struct node *nodePointer;
typedef struct node {
    char *word;
    nodePointer link;
};
void delete(nodePointer *first, nodePointer trail, nodePointer x);


int main(int argc, const char * argv[]){
    nodePointer A=NULL;
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
    C->link= D;
    D->link=NULL;
#if 0
    //delete B
    nodePointer deletion=B; //remember to free soon.
    A->link=B->link; // D should not be null. unless, we cannot access link field.
    free(deletion);
    
    //delete A
    nodePointer deletion2=A;
    A=A->link;  // A should not be null. unless, we cannot access link field.
    free(deletion2);
#endif
    delete(&A,NULL,A);
    delete(&A,A,A->link);

    nodePointer t = A;
#if 0
    while(t!=NULL){
        printf("word : %s\n",t->word);
        t=t->link;
    }
#else
    for (t; t; t=t->link){
        printf("word : %s\n",t->word);
    }
#endif
}
void delete(nodePointer *first, nodePointer trail, nodePointer x){
    // trail : the node infront of the target
    // x : deletion target
    if(trail){
        trail->link=x->link;
    }else{ // trail is NULL. deleting first node.
        *first=(*first)->link;
    }
    free(x);
}
