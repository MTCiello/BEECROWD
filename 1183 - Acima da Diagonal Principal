#include <stdio.h>
#define TAM 12

int main(){
    double mat[TAM][TAM];
    double res=0;
    int i, j, cont;
    char operacao;
    cont = 0;
    
    fflush(stdin);
    scanf(" %c",&operacao);
    for(i=0; i < TAM; i++){
        for(j=0; j < TAM; j++){
            scanf("%lf", &mat[i][j]);
            if(j > i){
                res = res  + mat[i][j];
                cont++;
            }
        }
    }

    if(operacao == 'M') res = res / cont;

    printf("%.1lf\n", res);

}
