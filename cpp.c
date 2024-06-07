//
// Created by Mohamed Hatem on 07/06/2024.
//
#include <stdio.h>

#define SWAP(a, b) { int tmp = a; a = b; b = tmp; }


int main() {
    char x = 'a';
    char y = 'b';
    //printf("x:%d y:%d\n", x, y);
    { int tmp = x; x = y; y = tmp; }
    printf("x:%c y:%c\n", x, y);
}
