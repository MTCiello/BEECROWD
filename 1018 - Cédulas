#include <stdio.h>
		int V1, V2, n1, n2, n5, n10, n20, n50, n100;
int main(){
    scanf("%d", &V1);
    V2 = V1;
	if(0 < V1 < 1000000){
	   n100=V1/100;
	   n50 = (V1-(n100*100))/50;
	   V1-= n100*100;
	   n20 = (V1-(n50*50))/20;
	   V1-= n50*50;
	   n10= (V1-(n20*20))/10;
	   V1-= n20*20;
	   n5= (V1-(n10*10))/5;
	   V1-= n10*10;
	   n2= (V1-(n5*5))/2;
	   V1-= n5*5;
	   n1= (V1-(n2*2))/1;
	
        printf("%d",V2);
        printf("\n%d nota(s) de R$ 100,00",n100);
        printf("\n%d nota(s) de R$ 50,00",n50);
        printf("\n%d nota(s) de R$ 20,00",n20);
        printf("\n%d nota(s) de R$ 10,00",n10);
        printf("\n%d nota(s) de R$ 5,00",n5);
        printf("\n%d nota(s) de R$ 2,00",n2);
        printf("\n%d nota(s) de R$ 1,00",n1);
	}
	printf("\n");
    return 0;
}
