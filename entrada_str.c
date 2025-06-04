#include <stdio.h>

int main(){
    char nombre[20];
    printf("Ingrese nombre: ");
    fgets(nombre, 20, stdin);
    fputs(nombre, stdout);
    return 0;
}