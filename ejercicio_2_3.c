// Hugo Araya Carrasco
#include<stdio.h>

void lee_datos(int vector[], int maximo, int *cantidad);
void suma (int vector[], int num_elem, int *adicion);

int main(){
    int vector[10], n;
    int adicion;
    lee_datos(vector, 10, &n);
    suma(vector, n, &adicion);
    printf("Suma = %d\n", adicion);
    return 0;
}

void lee_datos(int datos[], int n, int *cantidad){
    int numero, i, maximo;
    FILE *ent;
    ent = fopen("entrada_numeros.txt", "r");
    *cantidad = 0;
    while (!feof(ent)){
        fscanf(ent, "%d", &numero);  
        datos[*cantidad] = numero;
        (*cantidad)++;    
    }
}

void suma (int vector[], int num_elem, int *adicion){
    int sumar = 0, i;
    i = 0;
    while (i < num_elem){
        sumar = sumar + vector[i];
        i = i + 1;
    }
    *adicion = sumar;
}