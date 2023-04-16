//argumento un número entero de días. El programa debe imprimir la cantidad de años, semanas y días correspondiente.  375 días imprime: "1 año, 1 semana, 3 días.".
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int dia=atoi(argv[1]);

    int ano=dia/365;
    int anor=dia%365;
    
    int sem=anor/7;
    int semr=anor%7;
    

    printf("ano:%d\nsemana:%d\ndias:%d", ano, sem, semr);

    return 0;
}
