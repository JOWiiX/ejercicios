//Escribir un programa que genere un array de 100 elementos con enteros aleatorios entre 0 y 100. Calcular el promedio de los valores en el array.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
    int arr[100];

    srand(time(NULL));

    for (size_t j = 0; j < 100; j++) {
        arr[j]= rand() %100+1;
    }
    
    for (size_t i = 0; i < 100; i++) {
        printf("%d\n", arr[i]);
    }
    
    float avg=0;
    for (size_t i = 0; i < 100; i++) {
        avg+=arr[i];
    }
    printf("avg: %.2f", avg/100);
    return 0;
}
