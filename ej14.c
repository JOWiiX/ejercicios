//escribir un programa que calucule el factorial de n 
//Escribir un programa que calcule el factorial de un número n ingresado como argumento.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int n=atoi(argv[1]);
    long long int j=1;



    for (size_t i = 0; i < n; i++) {
        j*=i+1;
    }
        printf("%zu ", j);
    return 0;
}
