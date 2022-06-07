#include <iostream>

using namespace std;

int
main ()
{

  float V;
  int C, CP;
  C = CP = 0;
  do
    {
      scanf ("%f", &V);
      C++;
      if (V > 0)
	{
	  CP++;
	}
    }
  while (C < 6);
  printf ("%d valores positivos\n", CP);
  return 0;
}
