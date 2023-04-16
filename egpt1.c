//Write a C program to find the sum of all elements of an array.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int size=atoi(argv[1]);
    int arr[size];
    int res=0;
    for (size_t j = 0; j < size; j++) {
        printf("ingrese valor %d del array: ", j+1);
        scanf("%d", &arr[j]);
    }
    
    for (size_t i = 0; i < size; i++) {
        res+=arr[i];
    }
    printf("%d ", res);
    
    return 0;
}
