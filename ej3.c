//Escribir un programa que simule tirar un dado "cargado". Imprimiendo el resultado de tirar el dado, teniendo en cuenta que 
//la probabilidad de tirar un 1, 2, 3, 4 o 5 es de 1/8 y de tirar un 6 es de 3/8.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) 
{
    int tirada=atoi(argv[1]);
    srand (time(NULL));

    for (size_t i = 0; i < 10; i++) {
    
    if (rand() % 8 +1 <= 6) {
        rand() % 8 +1==6;
        printf("%d ", rand() % 6 +1);
    }
    

}
  
    return 0;
}
