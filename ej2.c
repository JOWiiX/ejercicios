//Escribir un programa que tome dos argumentos enteros positivos e imprima "verdadero" si alguno de los argumentos es divisible por el otro.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);

    if (a%b==0||b%a==0)
    {
        printf("verd");
    }
    
    return 0;
}
