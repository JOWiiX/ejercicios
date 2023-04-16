//Write a C program to calculate the sum of all odd numbers from 1 to 50 using a while loop.
#include <stdio.h>

int main(int argc, char const *argv[]) {
    int suma=0;
    int nro=1;
    while (nro <= 50) {
        if (nro%2==1) {
            suma+=nro;
        printf("%d ", nro);
        }
        nro++;
    }
        printf("\n%d ", suma);
    return 0;
}
