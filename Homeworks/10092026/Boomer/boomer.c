#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h> //libreria di funzioni di testing
#include <ctype.h>

//è utile utilizzare gli assert anche se siamo sicuri della correttezza del programma (un controllo in più non fa male)
//sono anche utili proprio per verificare cosa ci si aspetta in alcuni punti del programma

// Scrivere una funzione void maiuscole(char *s) che riceve in input una stringa e la modifica convertendo ogni carattere in maiuscolo. 
//Per convertire un singolo carattere in maiuscolo è necessario invocare la funzione toupper(), consultate la pagina man per l'uso.
//Scrivere un programma boomer che invoca la funzione maiuscole sui parametri argv[1], argv[2], ... e stampa le stringhe così ottenute.

void termina(const char*);
void maiuscole(char*);

int main(int argc, char *argv[]) {
    
    for(int i = 1; i < argc; i++){
        maiuscole(argv[i]);
        printf("%s\n", argv[i]);
    }

    return 0;
}

void maiuscole(char *s){
    for(int i = 0; i < strlen(s); i++){
        s[i] = toupper(s[i]);
    }
}
