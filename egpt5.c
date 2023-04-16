//Write a C program that takes two integers as input, swaps their values using pointers, and then prints the swapped values.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int nro =atoi(argv[1]);
    int nro2=atoi(argv[2]);
    
    printf("nro1: %d\tnro2: %d\n", nro, nro2);

    
    nro= *(argv[2]);
    nro2= *(argv[1]);

    printf("number1:%d\nnumber2:%d", nro, nro2);
    return 0;
}
