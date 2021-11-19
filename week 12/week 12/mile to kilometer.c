//
//  mile to kilometer.c
//  week 12
//
//  Created by 김지민 on 2021/11/19.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    double mile, km;
    
    if(argc!=2){
        printf("Input example) miletokm (distance)\n");
        return 1;
    }
    
    mile=atof(argv[1]);//f: floating, not float
    //argv[0]: file name
    km=1.609*mile;
    printf("result: %lf\n",km);
}
