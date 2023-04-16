//Write a C program to concatenate two strings.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int size=atoi(argv[1]);
    int sizes=atoi(argv[2]);

    char word[size+1];
    printf("ingrese una palabra: ");
    scanf("%s", word);

    char words[sizes+1];
    printf("ingrese otra palabra: ");
    scanf("%s", words);

    char wordr[(size)+(sizes)+1]; 
    for (size_t i = 0; i < size; i++) {
        wordr[i] = word[i];
    }

    for (size_t j = 0; j < sizes +1; j++) {
        wordr[size+j] = words[j];

    }

    printf("su palabra es: %s", wordr);
    return 0;
}
