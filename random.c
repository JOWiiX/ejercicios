#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
    srand(time(NULL));
    printf("%d\n", rand() % 100 + 1);
    return 0;
}
