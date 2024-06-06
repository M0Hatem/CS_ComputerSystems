//
// Created by Mohamed Hatem on 06/06/2024.
//
#include <stdio.h>

int main (int argc,char *argv[]) {
    int a[10];
    for(int i = 0;i <10;i++) {
        a[i]=i;
    }

    int *p;
    p=&a[0];
    for (int i = 0; i < 10; ++i) {

        printf("%d \n",a[i]);
        printf("%d \n",*(p+i));
        printf("%d \n",a[1]);
    }
}