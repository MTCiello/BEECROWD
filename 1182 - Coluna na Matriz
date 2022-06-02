#include <stdio.h>
#define TAM 12 

int main(){
    double mat[TAM][TAM];
    double res=0;
    int i, j, col;
    char operacao;

    scanf("%d",&col);
    fflush(stdin);
    scanf(" %c",&operacao);
    for(i=0; i < TAM; i++){
        for(j=0; j < TAM; j++){
            scanf("%lf", &mat[i][j]);
        }
    }

    for(i = 0; i < TAM; i++){
        res = res + mat[i][col];
    }

    if(operacao == 'M') res = res / i;

    printf("%.1lf\n", res);

}
