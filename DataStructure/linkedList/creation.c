#include <stdio.h>
#include <stdlib.h> //for malloc
typedef struct node *nodePointer;
typedef struct node {
    int coef;
    int exp;
    nodePointer link;
};
nodePointer A=NULL;
int main(int argc, const char * argv[]){
    A=(nodePointer)malloc(sizeof(*A)); //the size equivalent to what A points, that is a node.
    // A=(nodePointer)malloc(sizeof(struct node)); //can be replaced by this line.
    // so far, in data fields and the link field, there is a garabage.

    A->coef=2;
    A->exp=500;
    A->link= NULL;
    //now the node is filled

    nodePointer t = A;//make t point to the same place where A does.
    while(t!=NULL){
        printf("coef=%d,exp=%d\n",t->coef,t->exp);
        t=t->link;//the reaswon why we declared t rather than using A. if we traverse the linked list, we lose where the starting point
    }
}
