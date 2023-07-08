//Escribir un programa que imprima tres strings representando una mano de truco aleatoria, por ejemplo: "Cuatro de copas", "Ancho de espada", "Tres de basto".

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[]) {
    
    srand(time(NULL));
    char *nros[]= {"ancho", "dos", "tres", "cuatro", "cinco", "seis", "siete", "diez", "once", "doce"};
    char *palos[] = {"basto", "copa", "espada", "oro"};
    
    //seleccion de 1° carta
    char *carta1[]= {nros[rand() % 10], palos[rand() % 4]};
    printf("%s de %s\n", carta1[0], carta1[1]);


    char *carta2[]= {nros[rand() % 10], palos[rand() % 4]};
    if (carta2[1]==carta1[1]) { //compara palos
        char *nnro= nros[rand() %10];            //nuevo nro de carta
        while (carta1[0]==nnro) {
            nnro= nros[rand() %10];     
        }
        
    }
    printf("%s de %s\n", carta2[0], carta2[1]);


    char *carta3[]= {nros[rand() % 10], palos[rand() % 4]};

    if (carta3[1]==carta2[1]) { //compara palos
        char *nnro= nros[rand() %10];            //nuevo nro de carta
        while (carta2[0]==nnro) {
            nnro= nros[rand() %10];     
        }
        
    }
    
    printf("%s de %s\n", carta3[0], carta3[1]);

    return 0;
}
