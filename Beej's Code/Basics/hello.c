#include <stdio.h>
#include <stdbool.h> //non necessaria se ti utilizza C23

int plus_one(int);

int main(void){

    //printf("Hello, World!\n");

    //è possibile ora utilizzare variabili per memorizzare i valori e i relativi % per stampare nei printf
    //commento ora printf("Hello, World!\n"); e assegno "Hello, World!" al tipo char * (utilizzato per le stringhe)

    char *s = "Hello, World!";
    int i = 1;
    float f = 3.14;

    puts("== ESEMPI DI BASE DI C ==\n");
    printf("Stampo la stringa %s, l'intero i = %d e il float f = %.2f\n",s,i,f); //ovviamente nel printf seguo l'ordine delle variabili corrispondente
    printf("La grandezza di i è %zu bytes\n", sizeof(i)); //il tipo di sizeof è size_t (un tipo specifico di intero senza segno) %zu è il suo specificatore di formato
    //sizeof è la grandezza in bytes del TIPO dell'espressione e NON dell'espressione stessa, infatti:
    printf("%zu\n", sizeof(3 + 4)); //stamperà comunque 4, poiché un intero occupa 4 bytes, la grandezza è calcolata a tempo di compilazione, non a runtime

    //esempio di switch statement, da usare SOLO con gli interi o caratteri singoli (no floats o stringhe)
    puts("== SWITCH STATEMENT ==\n");

    int count = 3;
    printf("Conta vale %d, quindi stampa:\n", count);

    switch(count){
        case 1:
            printf("Conta 1\n");
            break;
        case 2:
            printf("Conta 2\n");
            break;
        case 3:
            printf("Conta 3\n");
            break;
        default:
            printf("Non conta niente");
            break;
    }

    //il break permette di uscire dal case specifico che viene triggerato, nel caso non ci sia brake viene anche eseguito il case successivo
    //questo si chiama fall through, esempio:

    count = 1;
    printf("Ora conta vale %d ma ho creato un fall through quindi stampa:\n", count);
    switch(count){
        case 1:
            printf("Conta 1\n");
            
        case 2:
            printf("Conta 2\n");
            break;
        case 3:
            printf("Conta 3\n");
            break;
        default:
            printf("Non conta niente");
            break;
    }

    //questo secondo switch stamperà prima 1, poi 2 e poi uscirà dallo switch. quindi il "break" è FONDAMENTALE per evitare fall through
    //nel caso lo si voglia fare intenzionalmente è sempre meglio specificarlo con un commento

    puts("== FUNZIONI ==\n");
    
    //passo per VALORE count alla funzione, quindi anche se faccio return il valore di count non viene modificato infatti
    plus_one(count);
    printf("Conta non modificato, vale %d\n", count); //stampa 1

    //se per valore volessi stampare il suo successivo potrei fare
    printf("Conta non mofidicato, ma stampo il valore di return della funzione: %d\n", plus_one(count));
}

int plus_one(int a){
    return ++a;
}