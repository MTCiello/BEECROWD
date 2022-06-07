#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
        double X2, X1, Y2, Y1, D;
    scanf("%lf %lf", &X1, &Y1);
    scanf("%lf %lf", &X2, &Y2);
        D = sqrt(pow((X2-X1),2)+pow((Y2-Y1),2));
            printf("%.4lf\n", D);
  return 0;
}
