//Realizar un programa al cual se le ingrese un valor y realizar las tablas de mult. hasta dicho valor. 
//Ejemplo ingreso 15, realizar las tablas desde el 1x1 hasta el 15x15. Guardar los valores en una Matriz y luego imprimirlos en pantalla
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int size=atoi(argv[1]);
    int matrix[size][size]; 
    
    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size; j++) {
            matrix[i][j]=(i+1)*(j+1);
            printf("%d\t", matrix[i][j]);

        }
        printf("\n");
    }
    
    return 0;
}