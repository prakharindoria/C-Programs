#include <stdio.h>
#include <math.h>
void main ()
{
  int number, original, remainder, count=0,z;
  float result=0.0;
  printf ("Enter a Number here : ");
  scanf ("%d", &number);
  original = number;
  while (number != 0)
    {
      number = number / 10;
      ++count;
    }

  while (original != 0)
    {

      remainder = original % 10; //Getting Remainder
      result += pow (remainder, count);
      original /= 10; //Removing last digit

    }
  printf ("%d \n", result);
  z=(number == result) ? 1 : 0;
  if(z==1)
    printf("Arms");
   else
    printf("Not Arms");

}
