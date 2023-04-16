//Write a C program to find the largest and smallest elements in an array.
#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 
int main(int argc, char const *argv[]) {
    int size=atoi(argv[1]);
    int arr[size];  
    for (size_t i = 0; i < size; i++) {
        printf("ingrese el valor %d del array: ", i+1);
        scanf("%d", &arr[i]);
    }
    int mayor = INT_MIN;
    int menor = INT_MAX;

    for (size_t i = 0; i < size; i++) {
    for (size_t j = 0; j < size; j++) { //start array
       
        if (arr[i]>arr[j]) {
            if (arr[i]>mayor) {
                mayor=arr[i];
            }
        }

        
        else if (arr[i]<arr[j+1]) {
            if (arr[i]<menor) {
                menor=arr[i];
            }
        }
    }//fin array

    }

    printf("mayor= %d\nmenor=%d", mayor, menor);
}

