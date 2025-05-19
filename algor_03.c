#include <stdio.h>

int main(){
    float nota1, nota2, nota3, promedio;
    printf("Primera nota: ");
    scanf("%f", &nota1);
    printf("Segunda nota: ");
    scanf("%f", &nota2);   
    printf("Tercera nota: ");
    scanf("%f", &nota3);  
    promedio = (nota1 + nota2 + nota3)/3;
    if (promedio >= 4){
        printf("Aprueba con nota %f\n", promedio);
    } 
    else{
        printf("No Aprueba con nota %f\n", promedio);
    }
    return 0;
}