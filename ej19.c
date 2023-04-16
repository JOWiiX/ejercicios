/*El programa debe imprimir la combinación de billetes mínima necesaria para esa cantidad de dinero. 
Por ejemplo si ingresamos 570 el programa imprime: "1000: 0, 500: 1, 200: 0, 100: 0, 50: 1, 20: 1, 10: 0"*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int dinero=atoi(argv[1]);

//    int d,c,ci,v,di = 0;

    int m = dinero/1000;
    int mr = dinero%1000;

    int q = mr/500;
    int qr = mr%500;

    int d= qr/200;
    int dr= qr%200;

    int c= dr/100;
    int cr= dr%100;

    int ci= cr/50;
    int cir= cr%50;

    int v= cir/20;
    int vr= cir/20;


    printf("billetes de 1000:%d\n500:%d\n200:%d\n100:%d\n50:%d\n20:%d\n10:%d",m, q, d, c, ci, v);
 
    return 0;
}
