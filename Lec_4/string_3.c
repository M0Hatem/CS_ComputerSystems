#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char foo[4];
    strncpy(foo, "foo", 4);

    char bar[] = "foo";

    char* a = foo;
    char* b = bar;

    if (a == b) {
        printf("%s and %s are the same string\n", a, b);
    } else {
        printf("%d \n",strcmp("b","a"));
        printf("%s and %s are not the same, kind of\n", a, b);
    }

    return 0;
}
