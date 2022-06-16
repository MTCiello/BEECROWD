#include <stdio.h>

int main(){
	    int N1,N2,SOMA[15],AUX;

    while (N1!=0 && N2!=0){

        scanf("%d %d",&N1,&N2);
	 
		int TESTE = N1 + N2;

		for(AUX = 0 ; AUX < 11 ; AUX++){
			SOMA[AUX] = TESTE %10;
			TESTE = TESTE/10;
		}

		for(AUX = 10 ; AUX >= 0 ; AUX--){
			if(SOMA[AUX] != 0){
				printf("%d",SOMA[AUX]);
			}
		}
        if(N1!=0 && N2!=0){
            printf("\n");
        }
	} 
    return 0;
}
