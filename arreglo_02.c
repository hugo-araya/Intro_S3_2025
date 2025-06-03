#include <stdio.h>
#define MAXIMO 100

int main(){
    int n[MAXIMO]; // n es un arreglo de 10 enteros
    int i; // contador
    int tamano;
    printf("Indique la cantidad de datos:");
    scanf("%d", &tamano);
    // inicializa los elementos n a 0 del arreglo
    for ( i = 0; i < tamano; i++ ) {
        printf("Ingrese numero: ");
        scanf("%d", &n[i]);
    }
    printf( "Elemento Valor\n" );
    // muestra el contenido del arreglo n en forma de lista
    for ( i = 0; i < tamano; i++ ){
        printf("%5d%13d\n", i, n[i] );
    }
    return 0;
}