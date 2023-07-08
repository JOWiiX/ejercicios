/*Escribir un programa que use un ciclo for para imprimir los primeros n números de Fibonacci. Usar un argumento de línea de comandos para el valor de n. 
La sucesión de Fibonacci comienza así: , 1, 2, 3, 5, 8, 13, 21 ... etc. El próximo número en la sucesión es la suma de los dos anteriores.*/
#include <stdio.h>
#include <stdlib.h>

//int fibo (nro);

int main(int argc, char const *argv[]) {
    
    int in=1;
    int nro=atoi(argv[1]);
    int n=0;
    for (size_t i = 0; i < nro; i++) {
        
        n+=in;
        in+=in;
       printf("%d\t", n);
    }
    

    return 0;
}
