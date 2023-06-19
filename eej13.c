/*Escribir un programa que use un ciclo for para imprimir los primeros n números de Fibonacci. 
La sucesión de Fibonacci comienza así: 0, 1, 1, 2, 3, 5, 8, 13, 21 ... etc. El próximo número en la sucesión es la suma de los dos anteriores.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])  {
    int n=atoi(argv[1]);

    int a=1;
    float b=1;
    int c=1;
    for (int i = 0; i < n; i++) {
        printf("%d km are *roughly* %.1f miles\n",c, b);
        c=a+b; 
           b=a;
        a=c;
    }
    return 0;
}
