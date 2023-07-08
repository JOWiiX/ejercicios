//escribir un programa que calucule el factorial de n 
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    int n=atoi(argv[1]);
    int j=1;
    int a;
    int res=1;

    for (size_t i = 0; i < n; i++) {
        int res=n*(n-(i+1));
        printf("%d ",res);
    }
    
    return 0;
}
