//Escribir un programa que acepte un argumento n y genere la matriz identidad de dimensión n x n.
//Usar arrays bidimensionales.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int n=atoi(argv[1]);
    int arr[n][n];

    for (size_t j = 0; j < n; j++) {
        for (size_t i = 0; i < n; i++) {
            arr[j][i]= 0;
        }
    }
    


    for (int i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            if (i==j){
                arr[i][j]=1;
            }
            
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

