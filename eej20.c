/*Escribir un programa que acepte dos argumentos enteros a y b e imprima todos los números divisibles por 3 
entre a y b. El segundo argumento tiene que ser mayor o igual que el primero. 
Si a es mayor a b el programa debe imprimir mogolico y salir*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);


    if (a>=b) {
        printf("mogolico\n");
        return 1;
    }
    
    int i=a;
    while (i<=b) {
        if(i%3==0){
            printf("%d\n",i);
        }
        i++;
    }
    



    return 0;
}
