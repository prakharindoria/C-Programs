main(){
    calc();
}
void calc();
void calc()
{
    int n,i,sum=0;
    printf("Enter a Num:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;

    }
    printf("%d",sum);
}
