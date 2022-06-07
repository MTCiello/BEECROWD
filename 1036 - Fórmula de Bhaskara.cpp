#include <stdio.h>
#include <math.h>

int main (){
        double A, B, C, Delta, X1, X2;
    scanf("%lf %lf %lf", &A, &B, &C);
    Delta = pow(B,2)-(4*A*C);
        if(A == 0){
            printf("Impossivel calcular\n");
        } else { if (Delta >0){
            X1 = (-B + sqrt(Delta))/(2*A);
            X2 = (-B - sqrt(Delta))/(2*A);
    printf("R1 = %.5lf\n", X1);
    printf("R2 = %.5lf\n", X2);
        } else {
            printf("Impossivel calcular\n");
        }
        }
    return 0;

}
