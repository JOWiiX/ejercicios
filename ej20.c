//Escribir un programa que acepte 5 argumentos enteros e imprima la suma solamente de los argumentos que sean impares.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);
    int c=atoi(argv[3]);
    //int d=atoi(argv[4]);
    //int e=atoi(argv[5]);

    if (a%2==1 && b%2==1 && c%2==1)
    {
        printf("%d", a+b+c);    
    }

    if (a%2==1 && b%2==0 && c%2==1)
    {
        printf("%d", a+c);    
    }
    
    if (a%2==0 && b%2==1 && c%2==1)
    {
        printf("%d", b+c);    
    }

    if (a%2==1 && b%2==1 && c%2==0)
    {
        printf("%d", b+a);    
    }


    return 0;
}
