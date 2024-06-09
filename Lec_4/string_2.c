//
// Created by Mohamed Hatem on 07/06/2024.
//
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char foo[4];

    // if we want to change the foo size we have to sed a pointer to the free and allocate new one
    // what is the problem with this?
    strcpy(foo, "fool me once shame on ... somebody");

    return 0;
}
