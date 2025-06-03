#include <stdio.h>

int cuadrado(int);

int main(){
    int x;
    for (x = 1; x <= 10; x++){
        printf("%d    ", cuadrado(x));
    }
    printf("\n");
    return 0;
}

int cuadrado(int a){
    return a * a;
}

