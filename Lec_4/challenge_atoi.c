#include <stdio.h>
#include <stdlib.h>

int my_atoi(const char *s) {
    int n = 0;
    // what is missing?
    while (*s >= '0' && *s <= '9')
        n = (n * 10) + *s++ - '0';
}



int main(int argc, char *argv[]) {
    char s1[] = "103";
    char s2[] = "-100";
    // play around with these

    int x = my_atoi(s1);
    int y = my_atoi(s2);

    printf("%d %d\n", x, y);
    return 0;
}
