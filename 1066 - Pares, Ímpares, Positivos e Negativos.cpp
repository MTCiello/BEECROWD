#include <iostream>

using namespace std;

int main() {
        int V, C, CPr, Cimp, Cp, Cn;
        C = CPr = Cimp = Cp = Cn = 0;
    do{
        scanf("%d", &V);
            C++;
            if(V%2==0){
                CPr++;
            } else {
                Cimp++;
            }
            if(V>0){
                Cp++;
            } else{
                if(V<0){
                    Cn++;
                }
            }
    } while (C < 5);
        printf("%d valor(es) par(es)\n", CPr);
        printf("%d valor(es) impar(es)\n", Cimp);
        printf("%d valor(es) positivo(s)\n", Cp);
        printf("%d valor(es) negativo(s)\n", Cn);
  return 0;
}
