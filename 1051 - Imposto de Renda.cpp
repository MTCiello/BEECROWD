#include <iostream>

using namespace std;

int
main ()
{
  double E, T, S1, S2, T1, T2, T3;
  T1 = 2000.00;
  T2 = 3000.00;
  T3 = 4500.00;
  scanf ("%lf", &E);
  if (E <= T1)
    {
      printf ("Isento\n");
    }
  else
    {
      if (E <= T2)
	{   // até 3000
	  S2 = (E - T1) * 0.08;	// (2980-2000)=2*0,08 = R$ 78,4
	  T = S2;
	}
      else
	{
	  if (E <= T3)
	{  // até 4500
	  S1 = (E - T2) * 0.18;	// (3002-3000)=2*0,18 = R$ 0,36
	  S2 = ((E - T1)-(E - T2)) * 0.08;	// (3002-2000-S1)=1000*0,08 = R$ 80,00
	  T = S2 + S1;
	} else { if (E>T3){ // depois de 4500
	  S1 = (E - T3)*0.28; // (4520-4500)=20*0,28 = R$ 5,60
	  S2 = ((E - T2)-(E - T3))*0.18; // (4520-3000-20)=1500*0,18 = R$ 270
	  T = S1+S2+80;
	}
	    
	}
	}
	  printf ("R$ %.2lf\n", T);
	}

  return 0;
}
