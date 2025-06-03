#include <stdio.h>

int main(){
    int n[10]; // n es un arreglo de 10 enteros
    int i; // contador
    // inicializa los elementos n a 0 del arreglo
    for ( i = 0; i <= 10; i++ ) {
        n[i] = 100; // establece el elemento i-esimo a 0
    }
    printf("i: %d\n", i);
    printf( "Elemento Valor\n" );
    // muestra el contenido del arreglo n en forma de lista
    for ( i = 0; i < 10; i++ ){
        printf("%5d%13d\n", i, n[i] );
    }
    return 0;
}