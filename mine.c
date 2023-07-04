/*escribir un programam q acepte p y n crear una matriz de buscaminas de n x n con -1 las casillas con minas
p = probabilidad de minas   luego volver a recorrer el array para llenar los casilleros sin minas 
con el nro de minas vecinas. Consideren usar un array de (n+2)x(n+2) para representar el tablero*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
    int n=atoi(argv[1]);
    float p=atof(argv[2]);
    int arr[n+2][n+2];

    srand(time(NULL));


    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            arr[i][j]=0;
        }
    }
    
    for (size_t i = 1; i < n-1; i++) {
        for (size_t j = 1; j < n-1;j++) {
            if (((rand() % 100)/(float)100)<p) {
                arr[i][j]=-1;
            }
        }
    }



    

     
    for (size_t i = 1; i < n-1; i++) {
        for (size_t j = 1; j < n-1; j++) {
            if (arr[i][j]==-1) {
                continue;
            }
            for (size_t k = i-1; k <= i+1; k++) {
                for (size_t l = j-1; l <=t j+1; l++) {

                    if (arr[k][l]==-1) {
                        arr[i][j]++;
                    }

                    
                }
            }
        }
    }

    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");   
    }
    
    return 0;
}

