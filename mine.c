/*escribir un programam q acepte p y n crear una matriz de buscaminas de n x n con -1 las casillas con minas
p = probabilidad de minas luego volver a recorrer el array para llenar los casilleros sin minas con el nro de minas vecinas.
Consideren usar un array de (n+2)x(n+2) para representar el tablero*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
    int n=atoi(argv[1]);
    int p=atoi(argv[2]);
    srand(time(NULL));
    int field[n];
    
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            field[i];
            printf("%d\t", field[i]);
        }
        printf("\n");
    }
    

    
    return 0;
}
