#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>

int main(int argc, char *argv[]){
    
    int spari = 0;
    int sdispari = 0;
    FILE *pari = fopen("pari.txt", "wt");
    FILE *dispari = fopen("dispari.txt", "wt");

    for(int i = 1; i < argc; i++){  
        int x = atoi(argv[i]);
        if(x % 2 == 0){
            fprintf(pari, "%d\n", x);
            spari += x;
        }
        else{
            fprintf(dispari, "%d\n", x);
            sdispari += x;
        }
       
    }

    if(fclose(pari) != 0)
        exit(4);
    if(fclose(dispari) != 0)
        exit(5);

    printf("Somma interi pari: %d\n", spari);
    printf("Somma interi dispari: %d\n", sdispari);
    return 0;
}