//Escribir un programa que genere un array de 100 lugares con enteros aleatorios entre 0 y 100. 
//Encontrar el máximo y el mínimo del array.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
    int arr[10];
    srand (time(NULL));

    for (size_t i = 0; i < 10; i++) {
        arr[i] = rand() % 100 + 1;
    }
    
    int ma=-101;
    int me=101;
    float avg=0;
    for (size_t i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
        if (ma<arr[i])
        {
            ma=arr[i]; //mayor
        } 

        if (me>arr[i])
        {
            me=arr[i]; //menor
        }   
        
        avg+=arr[i];
        
    }
    
    
    printf("\nmayor: %d\n", ma);


    printf("\nmenor: %d\n", me);

    printf("\naverage: %.1f\n", avg/10);

    return 0;
}

