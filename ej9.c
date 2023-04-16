//Escribir un programa que acepte dos argumentos: día y mes. Imprimir "verdadero" si la fecha está entre el 20 de marzo y el 20 de junio
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int dia=atoi(argv[1]);
    int mes=atoi(argv[2]);

    if (dia>=20&&mes==3) {
        printf("verdadero");
    }

    else if (mes>3&&mes<6)
    {
        printf("verdadero");
    }
    
    else if (dia<=20&&mes==6)
    {
        printf("verdadero");
    }

    else {
        printf("falso");
    }
    return 0;
}

