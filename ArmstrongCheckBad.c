#include <stdio.h>
#include <math.h>
void
main ()
{
  int n, cn, rem, c=0,z;
  float res=0.0;
  printf ("Enter a Number here : ");
  scanf ("%d",&n);
  cn=n;
  while (cn!= 0)
    {
      cn= cn / 10;
      ++c;
    }

  cn = n;
  while (cn != 0)
    {
      rem = cn % 10; //Getting Remainder
      res +=pow(rem,c);
      cn /= 10; //Removing last digit
    }
  if(res==n)
    printf("Armstrong");
  else
    printf("Not Arms");

}
