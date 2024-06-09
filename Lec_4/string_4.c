#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

// change this?
const char delimiter[] = " ";

int main(int argc, char *argv[]) {
    char buffer[500];
    printf("prompt> "); 
    while (fgets(buffer, 500, stdin) != NULL) {
	// need to break it into pieces ... with strtok()

	printf("prompt> "); 
    }


    return 0;
}

