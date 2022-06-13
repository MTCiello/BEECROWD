#include <stdio.h>

int main (){
        int N, B, M=0, J=0, AUX;
    
    do {
        M=J=0;
    scanf("%d", &N);
    if(N==0){
        break;
    }
    AUX=N;

    while(AUX--){

        scanf("%d", &B);
            if(B==1){
                J++;
            } else {
                M++;
            }
    }

    if(N==0){
        printf("\n");
    } else {
        printf("Mary won %d times and John won %d times\n",M,J);
    }
    }while(N!=0);
    return 0;
}
