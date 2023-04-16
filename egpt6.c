//Write a C program to find the second largest element in an array of integers.

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(int argc, char const *argv[]) {
    int size=atoi(argv[1]);
    int arr[size];
    int arrv[size];
    int mayor=INT_MIN;
    int casi=INT_MIN;

    for (size_t h = 0; h < size; h++) {
        printf("ingrese el valor %d del array: ", h+1);
        scanf("%d",&arr[h]);
    }

    for (size_t i = 0; i < size; i++) {
        arrv[i]=arr[i];        
    }
    
    for (size_t i = 0; i < size; i++) {
        for (size_t j = 0; j < size; j++) {
            if (arr[i]>arr[j]) {
                if (arr[i]>mayor) {
                    mayor=arr[i];
                }
            }
        }
    }
    
    for (size_t i = 0; i < size; i++) {
        if (arrv[i]==mayor) {
            arrv[i]=INT_MIN;
        }
        for (size_t j = 0; j < size; j++) {
            if (arrv[i]>arrv[j]) {
                if (arrv[i]>casi&&arrv[i]<mayor) {
                    casi=arrv[i];
                }
                
            }
        }
    }
    
    printf("mayor %d",casi);
    return 0;
}
