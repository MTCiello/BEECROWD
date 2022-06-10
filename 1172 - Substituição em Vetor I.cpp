#include <stdio.h>

int main(){
        int N, C=0, X[10];
    do{
    C++;
    scanf("%d", &N);
    if(N<=0){
        X[C] = 1;
    } else {
        X[C] = N;
    }
    printf("X[%d] = %d\n", C-1, X[C]);

    }while(C<10);


    return 0;
}
