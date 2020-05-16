int fact(int);
main(){
int n,g;
printf("Enter a Num:");
scanf("%d",&n);
g=fact(n);
printf("%d",g);

}
int fact(int x)
{ int i=1;
    for(;x>1;x--)
        {
        i=x*i;
        }

 return (i);
}

