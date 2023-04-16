//Hacer un programa que genere 100 valores entre el 1-10 y guarde cuantas veces salio cada numero en un array. imprimirlos en pantalla de la siguiente manera 1: [cant] 2: [cant] etc...
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    int arr[10] = {0};
    srand (time(NULL));

    for (size_t i = 0; i < 100; i++) {
        arr[rand() % 10 +1]++;
    }




    for (size_t l = 0; l < 10; l++) {
       printf("%d: %d\n",l+1, arr[l]);
    }
    

    return 0;
}

