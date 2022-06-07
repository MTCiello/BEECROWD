#include <stdio.h>

int main (){
        int N, Cont, ContPAR;
        Cont = ContPAR = 0;
    do{
        scanf("%d", &N);
        Cont++;
            if (N%2==0){
                ContPAR++;
            } 
    }while (Cont < 5);
    printf("%d valores pares\n", ContPAR);
    return 0;
}
