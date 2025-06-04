#include <stdio.h>
#include <string.h>

int main(){
    FILE *ent;
    FILE *sal;
    char linea[20];
    ent = fopen("datos1.txt", "r");
    sal = fopen("salida.txt", "w");
    while (!feof(ent)){
        fgets(linea, 20, ent);
        fputs(linea, sal);
    printf("Leido: %s", linea);
    }
    fclose(ent);
    fclose(sal);
    return 0;
}