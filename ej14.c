<<<<<<< HEAD
//escribir un programa que calucule el factorial de n 
=======
//Escribir un programa que calcule el factorial de un número n ingresado como argumento.

>>>>>>> cb4437ebcfff9b9bf99fcd7e2b3b8a53d4189ae8
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int n=atoi(argv[1]);
<<<<<<< HEAD
    int j=1;
    int a;
    int res=1;

    for (size_t i = 0; i < n; i++) {
        int res=n*(n-(i+1));
        printf("%d ",res);
    }
=======
    int nn=1;
    int j=n;
    do {
        nn*=j;  
        j--;
    } while (j!=1);
    printf("%d\n", nn);
        
        

>>>>>>> cb4437ebcfff9b9bf99fcd7e2b3b8a53d4189ae8
    
    return 0;
}
