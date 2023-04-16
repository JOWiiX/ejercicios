//Hacer un programa que genere 100 valores entre 1-10 y los guarde en un array, imprimirlos en pantalla de la siguiente manera 1: [cant] 2: [cant] etc
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int arr[100];

    srand(time(NULL));

    for (size_t i = 0; i < 100; i++)
    {
        arr[i]= rand() % 10 + 1;
        printf("%d:%d\n ",i+1, arr[i]);
    }
    
    return 0;
}
 