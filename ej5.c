//Escribir un programa que tome dos números enteros a y b como argumentos e imprima un entero aleatorio entre a y b.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);
    int at;
    
    srand(time(NULL));
    if (a>b) {
        at=a;
        a=b;
        b=at;
    }
    printf("su nro: %d", rand() % (b - a + 1) + a);
    
    return 0;
}
        