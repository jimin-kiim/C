//
//  main.c
//  week 7
//
//  Created by 김지민 on 2021/10/11.
//
//
#include <stdio.h>
#include <string.h>
int main() {
   char str[60] = "project program java";
//    printf("%s\n", strupr(str)); // (A)
//    printf("%s\n", strlwr(str)); // (B)
   printf("%d\n", strlen("project")); // (C)
   printf("%d\n", strcmp(str, "project program java")); // (D)
   printf("%s\n", strpbrk("project program java", "am")); // (E)
   printf("%s\n", strstr("project program java", "je")); // (F)
   printf("%s\n", strchr("project program java", 'g')); // (G)
   printf("%d\n", strpbrk("project program java", "am")); // (E)
   printf("%d\n", strstr("project program java", "je")); // (F)
   printf("%d\n", strchr("project program java", 'g')); // (G)
   printf("%s\n", strcat(str, " C++")); // (H)
   printf("%s\n", strcpy(str, "project program")); // (I)
   memcpy(str, "python", strlen("python") + 1);
   printf("J: %s\n", str); // (J)

    return 0;
}
