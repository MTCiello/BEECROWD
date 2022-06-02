#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){

        int N;
        char  J1[20], J2[20];
    scanf("%d", &N);
        if(1<=N && N<=1000){
        for(int i=0;i<N;i++){ 
            scanf("%s", J1);
            scanf("%s", J2);
                   if(!strcmp(J1, "ataque") && !strcmp(J2, "ataque")){printf("Aniquilacao mutua\n");
            } else if(!strcmp(J1, "pedra") && !strcmp(J2, "pedra")){printf("Sem ganhador\n");
            } else if(!strcmp(J1, "papel") && !strcmp(J2, "papel")){printf("Ambos venceram\n");
            } else if(!strcmp(J1, "ataque") && !strcmp(J2, "ataque") ==0){printf("Jogador 1 venceu\n");
            } else if(!strcmp(J2, "ataque") && !strcmp(J1, "ataque") ==0){printf("Jogador 2 venceu\n");
            } else if(!strcmp(J1, "pedra") && !strcmp(J2, "papel")){printf("Jogador 1 venceu\n");
            } else {printf("Jogador 2 venceu\n");}
            }
        }       
    return 0;
}
