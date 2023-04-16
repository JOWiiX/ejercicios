//Escribir un programa que intercambie el valor de dos variables enteras a y b. Los valores iniciales de a y b son argumentos del programa. Imprimir los valores de a y b antes y después
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);

    printf("primeros valores: a=%d, b=%d\n", a, b);

    int at=a;
    int bt=b;

    a=bt;
    b=at;

    printf("su nro ahora es: a=%d, b=%d", a, b);

    return 0;
}
