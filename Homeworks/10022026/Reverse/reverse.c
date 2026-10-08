#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char *argv[]) {

    
    for(int i = 1; i < argc; i++){
        char *s = strdup(argv[i]);
        for(int j = strlen(s); j >= 0; j--){
            printf("%c", s[j]);
        }
        printf("\n");
        free(s);
    }
    return 0;
}