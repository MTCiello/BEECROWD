#include <stdio.h>
#include <math.h>

#include <stdio.h>

int main(){
        float A,B,C;
    scanf("%f %f %f", &A, &B, &C);
    if(A >= (B+C) || B >= (A+C) || C >= (A+B))
    printf("NAO FORMA TRIANGULO\n");
        else if(pow(A,2) == (pow(B,2) + pow(C,2)) || pow(B,2) == (pow(A,2) + pow(C,2)) || pow(C,2) == (pow(A,2) + pow(B,2)))
    printf("TRIANGULO RETANGULO\n");
            else if(pow(A,2) > (pow(B,2) + pow(C,2)) || pow(B,2) > (pow(A,2) + pow(C,2)) || pow(C,2) > (pow(A,2) + pow(B,2)))
    printf("TRIANGULO OBTUSANGULO\n");
                else if(pow(A,2) < (pow(B,2) + pow(C,2)) || pow(B,2) < (pow(A,2) + pow(C,2)) || pow(C,2) < (pow(A,2) + pow(B,2)))
    printf("TRIANGULO ACUTANGULO\n");
                    if(A == B && A == C)
    printf("TRIANGULO EQUILATERO\n");
                        if((A == B && A != C)  || (A == C && A != B) || (B == C && B != A))
    printf("TRIANGULO ISOSCELES\n");

 return 0; 
}
