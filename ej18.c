//Escribir un programa que acepte dos argumentos, cantidad de horas trabajadas y salario por hora. 
//El programa imprime el salario total del trabajador con un máximo de dos lugares después de la coma.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    int hora=atoi(argv[1]);
    int sal=atoi(argv[2]);

    float res=hora*sal;

    printf("salario total: %.2f\n", res);
    

    return 0;
}
