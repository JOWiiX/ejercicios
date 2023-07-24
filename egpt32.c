//Escribir un programa que acepte dos argumentos n y m. El tamaño de un array es el argumento n.
// El programa llena el array con números aleatorios entre 0 y m y los imprime uno por línea.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[]) {
    int n=atoi(argv[1]);
    int m=atoi(argv[2]);
    int arr[n][n];
    srand(time(NULL));

    for (size_t j = 0; j < n; j++) {
        for (size_t i = 0; i < n; i++) {
            arr[j][i]= rand() % m+1;
        }
    }

    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
        printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
