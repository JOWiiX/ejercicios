/*Escribir un programa que acepte un argumento entero n e imprima n números aleatorios entre 0 y 100.
Al finalizar el programa debe imprimir el valor promedio de los números que aparecieron.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
    int n=atoi(argv[1]);
    srand(time(NULL));

    int nr=0;
    for (int i = 0; i < n; i++) {
        int pr=rand() % 100 +1;
        printf("nro %d: %d\n",i+1, pr);
        nr+=pr;
    }
    printf("avg: %d", nr/n);
    printf("\n");
    return 0;
}   
