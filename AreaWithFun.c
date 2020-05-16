double area(int);
main(){
int n;
double g;
printf("Enter a Num:");
scanf("%d",&n);
g=area(n);
printf("%f",g);

}
double area(int x)
{ double ar;
ar=3.14159265358979323846*x*x;
return (ar);
}


