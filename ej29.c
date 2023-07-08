//escribir un programa que declare y asigne valores a una matriz fr 4x4. Imprimir el promedio de cada fila y columna 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[]) {
    
    srand (time(NULL));
    int arr[4][4];

    //nros aleatorios
    for (size_t i = 0; i < 4; i++) {
        for (size_t j = 0; j < 4; j++) {
            arr[i][j]= rand() % 100 + 1;
        }
    }

    
    //imprime array
    for (size_t i = 0; i < 4; i++) {
        for (size_t j = 0; j < 4; j++) {
            printf("%d ", arr[i][j]);
        }
    printf("\n");
    }
    
    printf("\n");

    //filas
    int avg=0;
    for (size_t i = 0; i < 4; i++) {
        for (size_t j = 0; j < 4; j++) {
            avg+=arr[i][j];
        }
    printf("\npromedio de %d fila: %d", i+1, avg/4);
    avg=0; 
    }
    
    printf("\n");

    int avg2=0;
    for (size_t i = 0; i < 4; i++) {
        for (size_t j = 0; j < 4; j++) {
            avg2+=arr[j][i];
        }
        printf("\npromedio de %d columna: %d", i+1, avg2/4);
        avg2=0; 
    }
}
