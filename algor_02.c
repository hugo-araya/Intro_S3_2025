#include<stdio.h>

float a, b, suma;
int main(){
    printf("Ingrese favor un numero\n");
    scanf("%f", &a);
    printf("Ingrese el segundo numero\n");
    scanf("%f", &b);
    suma = a + b;
    printf("suma:%f", suma);
    return 0;
}