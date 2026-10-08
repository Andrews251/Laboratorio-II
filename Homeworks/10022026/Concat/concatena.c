#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char *argv[]) {
    
    int lun = 0;
    for(int i = 1; i < argc; i++){
        lun += strlen(argv[i]);
    }

    char *sconcat = malloc((lun+1) *sizeof(char));
    if(sconcat == NULL)
        exit(1);
    int k = 0;
    for(int i = 1; i < argc; i++){
        char *c = strdup(argv[i]);
        for(int j = 0; j < strlen(c); j++){
            sconcat[k] = c[j];
            k++;
        }
        free(c);
    }
    sconcat[lun] = '\0';

    printf("Stringa concatenata: %s\n", sconcat);
    free(sconcat);
    return 0;
}