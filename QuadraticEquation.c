#include <math.h>

main(){
    int a,b,c;
    float x1,x2,d,e;
printf("Quadratic Equation: Ax2+Bx+C \n");
printf("Input A,B,C: \n");
scanf("%d%d%d",&a,&b,&c);
d=b*b-4*a*c;
e=2.0*a;
printf("Discrimnent is: %f \n",d);
if(d<0)
    printf("Roots are Imaginary. \n");

else if(d==0)
{
x1=-b/e;
x2=x1;
printf("Roots are equal.\n");
printf("\nRoot: %f ",x1);
}

else if(d>0)
{
    x1=(-b+sqrt(d))/e;
    x2=(-b-sqrt(d))/e;
    printf("Roots are real and distinct. \n");
    printf("\nRoot 1: %f \nRoot 2: %f",x1,x2);
}


}
