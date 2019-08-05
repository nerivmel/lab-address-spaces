
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int tam;
    tam = atoi(argv[1]);
    tam = tam * 10e6;
    char *Apuntador = malloc(tam);
    for(;;){
        for(int i=0; i <tam;i++){
        *(Apuntador + i) = 0;
        //printf("Posicion con valor= %d \n", *(Apuntador+i));
        }
    }
    return 0;
}