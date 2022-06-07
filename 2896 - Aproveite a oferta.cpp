#include <stdio.h>

int main (){
        int T, C, V, Count, AUX=0;
    scanf("%d", &T);
    for(int i = 0;i<T;i++){
        scanf("%d %d", &C, &V);
        Count=0;
        for (AUX = C; AUX >= V; AUX -= V){
            ++Count;
        }
        printf("%d\n", Count + AUX);
    }
    return 0;
}
