/*matriz 15x15 de ceros. 1 en el centro de la matriz e ir llenando con unos los pasos del caminante, caminata termina cuando se sale de la matriz. 
puede caminar izq der top bot but not on 1. print hte matrix*/
#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char const *argv[]) {
    int arr[15][15] = {0};
    int w[1][1]= {1};

    for (size_t i = 0; i < 15; i++) {
        for (size_t j = 0; j < 15; j++) {
            printf("%d ", arr[i][j]);

        }
        printf("\n");
    }
        printf("\n");
    
    for (size_t i = 0; i < 15; i++) {
        for (size_t j = 0; j < 15; j++) {
            printf("%d ", w[7][7]);
        }
        printf("\n");
    }
    return 0;
}
