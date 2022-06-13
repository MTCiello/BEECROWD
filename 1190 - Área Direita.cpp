#include <stdio.h>

int main (){
        int AUX=0, CONT=0;
        char O;
        double M[12][12], N=0, SOMA=0;
    scanf("%s", &O);

    for(int L = 0; L < 12; L++){
		for(int C = 0; C < 12; C++){
			scanf("%lf", &M[L][C]);
        }
    }


    int L, C;
    AUX=11;
    for(L=1;L<6;L++){
        AUX--;  
        for(C = 11; C>AUX && AUX>=6; C--){

            CONT++;
            SOMA = SOMA + M[L][C];
        }
    }
        AUX=11;
        for(L=10;L>5;L--){ 
            AUX--;  
            for(C = 11; C>AUX && AUX>=6; C--){

                CONT++;
                SOMA = SOMA + M[L][C];
                }
            }
    
        if(O=='S'){
            printf("%.1lf\n", SOMA);
        } else if (O=='M'){
            printf("%.1lf\n", SOMA/CONT);
        }
    return 0;
}
