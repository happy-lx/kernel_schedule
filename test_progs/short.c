#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

#define MAXLEN 1000

volatile int res[MAXLEN];

// short task
int main(int argc, char** argv) {
    for(int i=0; i<MAXLEN; i++) {
        res[i] = (rand() % 10) ^ (rand() % 10);
    }
    for(int i=0; i<MAXLEN; i++) {
        for(int j=(i - 1); j>=0; j--) {
            res[i] = res[i] ^ res[j];
        }
    }
    printf("%d", res[MAXLEN - 1]);
    return 0;
}