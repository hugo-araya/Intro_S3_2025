#include <stdio.h>

float potencia(float, int);
int es_primo(int);
int factorial(int);

int main(){
    int exponente;
    float base;
/*
    base = 0;
    exponente = 0;
    printf("%f elevado a %d es %f\n", base, exponente, potencia(base, exponente));
    if (es_primo(123458) == 0){
        printf("No es primo\n");
    }
    else{
        printf("Es primo\n");
    }
*/
    printf("Factorial de 20 es %d\n", factorial(20));
    return 0;
}

float potencia(float base, int exponente){
    int resultado = 1;
    int i = 0;
    while (i < exponente){
        resultado = resultado * base;
        i++;
    }
    return resultado;
}

int es_primo(int numero){
    int contador = 0, i;
    if (numero == 1){
        return 0;
    }
    if (numero == 2){
        return 1;
    }
    i = 2;
    while (i < numero){
        if ((numero % i) == 0){
            contador = contador + 1;
        }
        i = i + 1;
    }
    if (contador == 0){
        return 1;
    }
    else{ 
        return 0;
    }
}

int factorial(int numero){
    int i;
    int fact = 1;
    if (numero == 0){
        return 1;
    }
    i = 1;
    while (i <= numero){
        fact = fact * i;
        i++;
    }
    return fact;
}

