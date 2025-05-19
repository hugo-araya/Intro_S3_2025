#include <stdio.h>

int main(){
    double n, x0, x1, difer;
    int i;
    printf("Ingrse numero: ");
    scanf("%lf", &n);
    x0 = n;
    x1 = n + 1;
    difer = x0 - x1;
    if (difer < 0){
        difer = difer * -1;
    }
    while (difer > 0.0001 ){
        x1 = (x0 + n/x0)/2;
        difer = x0 - x1;
        if (difer < 0){
            difer = difer * -1;
        }
        x0 = x1;
        i = i + 1;
    }
    printf("La raiz es : %lf\n", x1);
    return 0;
}