#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

// Scrivere una funzione int confrontas(const char *s, const char *q) che prende in input due stringhe e resituisce:

//     -1 se la prima è lessicograficamente minore della seconda (ad esempio s=camino, q=cane)
//     1 se la prima è è lessicograficamente maggiore della seconda (ad esempio s=gatto, q=cane)
//     0 se le due stringhe sono uguali

// Si ricordi che per convenzione se una stringa è un prefisso proprio dell'altra allora 
// quella lessicograficamente minore è quell più corta (quindi porta è minore di portale).

// Si scriva poi un un programma minimo che calcola e la stampa la stringa più piccola tra argv[1], argv[2], ...
int confrontas(const char*, const char*);
int main(int argc, char *argv[]) {
    
    printf("%d\n",confrontas(argv[1], argv[2]));
    
    return 0;
}

int confrontas(const char *s, const char *q){
    int r = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] < q[i])
            return -1;
        if(s[i] > q[i])
            return 1;
        else
            r = 0;
    }
    if(r == 0 && (strlen(s) < strlen(q)))
        r = -1;
    return r;
}
