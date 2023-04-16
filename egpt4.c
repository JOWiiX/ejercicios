//Write a program that takes user input for a string and prints out the characters one at a time in reverse order
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int pene=0;
    //printf("%s ",argv[1]);
    
    
    while (*(argv[1]+pene) !='\0') {
        pene++;
    }
    
    for (int i = 0; i < pene; i++) {
        printf("%c",(argv[1][pene-i-1]));
    }

    return 0;
}
