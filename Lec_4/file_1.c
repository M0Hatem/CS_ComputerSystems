#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>


int main(int argc, char *argv[]) {
    FILE* fp = fopen("file.out", "w");
    if (fp == NULL) {
	// change permissions to show how this might fail
	perror("fopen");
	exit(1);
    }

    int i;
    for (i = 0; i > -10; i--) {
	// this is NOT text(!)
	// use 'hexdump' to look at it
	// also try negative numbers
	int rc = fwrite(&i,sizeof(int),1,fp);
	assert(rc == 1);
    }

    (void) fclose(fp);
    return 0;
}

