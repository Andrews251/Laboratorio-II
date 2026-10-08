#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>

int main(int argc, char *argv[]){

    if(argc != 2)
         exit(1);
    int *a, *b;
    int n = atoi(argv[1]);
    
    int suma = 0, sumb = 0;
    int alength = 0, blength = 0;

    //allocazione array e controllo malloc
    a = malloc(n * sizeof(int));
    if(a == NULL)
        exit(2);
    b = malloc(n * sizeof(int));
    if(b == NULL)
        exit(3);
    
    for(int i = 1; i <= n; i++){ //riempimento degli array
        if(i%3 == 0 && i%5 != 0){
            a[i-1] = i;
            suma += i;
            alength++;
        }
        if(i%5 == 0 && i%3 != 0){
            b[i-1] = i;
            sumb += i;
            blength++;
        }
    }

    

    a = realloc(a, alength * sizeof(int));
    if(a == NULL)
        exit(4);
    b = realloc(b, blength * sizeof(int));
    if(b == NULL)
        exit(5);
    
    printf("lunghezza a = %d, somma a[] = %d\n", alength, suma);
    printf("lunghezza b = %d, somma b[] = %d\n", blength, sumb);

    free(a);
    free(b);

    return 0;
    

}