#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[]) {
    char a[6];// string in c (array of characters)
    sprintf(a,"hello");
        // ctrl +z  then fg to continue
    // the string terminated with \0 (null character) and its not visiable in the console
    printf("%s [length %lu]\n",a,strlen(a));

    for (int i = 0; i < 6; i++) {
        printf("[%c]\n",a[i]);
        if (a[i]=='\0') {
            printf("END OF STRING/,");
        }
    }

    return 0;


}
