main(){
    int n,r;
printf("Enter a Num");
scanf("%d",&n);
r=fact(n);
printf("%d",r);
}

int fact(int num)
{
    if(num==1)
       return num;

    num=num*fact(num-1);

}
int factorial(int num)
{
    if(num>0)
        return num*factorial(num-1);
    else
        return 1;
}
