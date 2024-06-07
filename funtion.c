#include <stdio.h>
//
// Created by Mohamed Hatem on 06/06/2024.
//

struct node {
    int x;
    int y;
};

void func(struct node *tmp) {
    tmp->x = 100;
}

void swap_int_pointer(int **a,int **b) {
    int *tmp=*a;
    *a = *b;
    *b = tmp;
}


void increment(int  *value) {
    *value += 3 ;
    printf("value: %p \n ",value);
}

int main(int argc,char *argv[]) {
    int x =3;
    printf("x: %d \n",x);
    increment(&x);
    printf("x: %d \n",x);
    return 0;
}