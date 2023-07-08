/*escribir un programa que reciba un string como argumento y decida si la palabra es un palindromo*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int n=atoi(argv[1]);
    char word[n]; 

    printf("\niggerese una palabra: ");
    scanf("%s", &word);
    int a=n;
    int b=n-2;
    while (word[a]==word[a-b]) {

    }
    
    for (size_t i = 0; i < n; i++) {
        if (word[n]==word[n-(b+(i+1))]) {
            printf("es palindromo webon \n");
        } else {
            printf("no es palindromo chamaco");
            break;
        }
        n--;
        b--;
    }
    

    
    return 0;
}
