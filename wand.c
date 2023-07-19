/*Escribir un programa que simule lo que se conoce como "caminos aleatorios". 
Usar una matriz de números enteros de 15 x 15 inicialmente llena de ceros. Poner un 1 en el centro de la matriz e ir llenando con unos representando los pasos del "caminante". 
La caminata termina cuando se sale de la matriz original. El caminante puede dar un paso a la vez a la izquierda, derecha, arriba o abajo. 
Pero no puede volver sobre sus pasos. Imprimir la matriz que representa la caminata al terminar.*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool check (int a, int b);
int main(int argc, char const *argv[]) {
    int arr[15][15] = {0};
    int a=7,b=7;
    arr[a][b]= 1;

    for (size_t i = 0; i < 15; i++){
        for (size_t j = 0; j < 15; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    do
    {
        
    } while (check);
    
     
    return 0;
}

bool check(int a, int b) {
    if (a>14||b>14)
    {
        return false;
    }
    
    if (a<0||b<0)
    {
        return false;
    }  else {
        return true;
    }
    
    
}
