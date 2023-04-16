//Escribir un programa que acepte tres argumentos e imprima "verdadero" si los números están en orden ascendente o descendente. Es decir si x > y > z o x < y < z. 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x=atoi(argv[1]);
    int y=atoi(argv[2]);
    int z=atoi(argv[3]);

    if (x>y&&y>z||z>y&&y>x)
    {
        printf("verdadero");
    }
    
    return 0;
}
