#include <stdio.h>
#define False 0
#define True 1

int main( ){
    int expresion, x = 1;
    expresion = (1 == x);
    printf("%d\n", expresion);
    if (expresion ){
        printf("El resultado de la expresión es verdadero\n");
    }
    else{
        printf("El resultado de la expresion es falso\n");
    }
    x = 4;
    for( ; x < 10; x += 3){}
        printf("%d\n", x / 2);
    x = 10;
    do {
        printf("%d\n", --x);
    } while ( x > 5);
    return 0;
}