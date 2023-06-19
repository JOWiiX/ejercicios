//Escribir un programa que calcule el factorial de un número n ingresado como argumento.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int n=atoi(argv[1]);
    int nn=1;
    int j=n;
    do {
        nn*=j;  
        j--;
    } while (j!=1);
    printf("%d\n", nn);
        
        

    
    return 0;
}
