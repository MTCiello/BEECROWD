#include <stdio.h>

int main (){
        int L, C, A1=0, A2=0;
    scanf("%d %d", &L, &C);
    if(L%2==0 && C%2==0){
        printf("1\n");
        } else if (L%2!=0 && C%2!=0){
        printf("1\n");
        }
    else {
        printf("0\n");
    }
    return 0;
}
