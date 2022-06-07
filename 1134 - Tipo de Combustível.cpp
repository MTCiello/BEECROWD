#include<stdio.h>

int main (){
    int E, A=0, G=0, D=0;
    while(E!=4){
    scanf("%d", &E);
    switch (E){
    case 1: A++; break;
    case 2: G++; break;
    case 3: D++; break;
    default: break;
    }}
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", A, G, D);
    return 0;
}
