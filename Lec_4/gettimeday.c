#include <stdio.h>
#include <sys/time.h>
#include <assert.h>

double gettima() {
    struct timeval t;
    int rc = gettimeofday(&t,NULL);
    assert(rc == 0);
    printf("%f",(double)t.tv_sec+(double)t.tv_usec/1e6);
    return (double)t.tv_sec+(double)t.tv_usec/1e6;
}
int main() {
    gettima();
}
