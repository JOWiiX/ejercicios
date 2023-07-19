/*matriz 15x15 de ceros. 1 en el centro de la matriz e ir llenando con unos los pasos del caminante, caminata termina cuando se sale de la matriz. 
puede caminar izq der top bot but not on 1. print hte matrix*/
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <stdbool.h>
bool check(int a, int b);

int main(int argc, char const *argv[]) {
    int arr[15][15] = {0};
    srand (time(NULL));





    int a=7, b=7;
    int j=a;
    int k=b;
    do {
        arr[a][b]=1;
        for (size_t i = 0; i < 15; i++) {
            for (size_t j = 0; j < 15; j++) {
                printf("%d ", arr[i][j]);
            }
        printf("\n");
        }
        printf("\n");
   
        int p;
        int p2;
        do
        {
            p=rand()%3-1;
            p2=rand()%3-1;
        } while (a+p==j&&b+p2==k);
        a+=p;
        b+=p2;


    } while (check(a,b));


 
    
    return 0;
}   
bool check(int a, int b) {
    if (a>14||a<0)
    {
        return false;
    }
    if (b>14||b<0)
    {
        return false;
    }
    
    else {
        return true;
    }

}
