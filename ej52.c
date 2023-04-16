//scribir un programa que imprima los números entre el 1000 y el 1999, mostrando 5 números por línea.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int nro=1000;

    for (size_t i = 0; i < 40; i++) {
        for (size_t i = 0; i < 5; i++) {
        printf("%d ", nro);
        nro +=5;
    }
    printf("\n");
    }
    printf("%d", nro-=1);
    

    return 0;
}
